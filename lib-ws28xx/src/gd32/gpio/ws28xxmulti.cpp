/**
 * @file ws28xxmulti.cpp
 *
 */
/* Copyright (C) 2021-2023 by Arjan van Vught mailto:info@gd32-dmx.org
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#if defined (DEBUG_PIXEL)
# undef NDEBUG
#endif

#pragma GCC push_options
#pragma GCC optimize ("O3")
#pragma GCC optimize ("-funroll-loops")
#pragma GCC optimize ("-fprefetch-loop-arrays")

#include <cstdint>
#include <cstring>
#include <cstdio>
#include <cassert>

#include "ws28xxmulti.h"
#include "pixelconfiguration.h"
#include "pixeltype.h"

#include "gd32/gpio/pixelmulti_config.h"
#include "gd32.h"
#include "gd32_dma_memcpy32.h"

#include "debug.h"

#if defined (GD32F4XX)
// DMA
# define DMA_PARAMETER_STRUCT				dma_single_data_parameter_struct
# define DMA_CHMADDR						DMA_CHM0ADDR
# define DMA_MEMORY_TO_PERIPHERAL			DMA_MEMORY_TO_PERIPH
# define dma_init							dma_single_data_mode_init
# define dma_struct_para_init				dma_single_data_para_struct_init
# define dma_memory_to_memory_disable(x,y)
// GPIO
# define GPIOx_OCTL_OFFSET					0x14U;
# define GPIOx_BOP_OFFSET					0x18U;
# define GPIOx_BC_OFFSET					0x28U;
#else
// DMA
# define DMA_PARAMETER_STRUCT				dma_parameter_struct
# define dma_interrupt_flag_clear(x,y,z)
// GPIO
# define GPIOx_BOP_OFFSET					0x10U;
# define GPIOx_BC_OFFSET					0x14U;
#endif

/**
 * https://www.gd32-dmx.org/memory.html
 */
#if defined (GD32F20X) || defined (GD32F4XX)
# define SECTION_DMA_BUFFER					__attribute__ ((section (".pixel")))
#else
# define SECTION_DMA_BUFFER
#endif

namespace pixel {
static constexpr auto PORT_COUNT = __builtin_popcount(GPIO_PINx);
static_assert(PORT_COUNT <= 16, "Too many ports");
//
static uint16_t s_DmaBuffer[2 * 1024 * 16] __attribute__ ((aligned (4))) SECTION_DMA_BUFFER;
static constexpr auto DMA_BUFFER_SIZE = sizeof(pixel::s_DmaBuffer) / sizeof(s_DmaBuffer[0]);
const auto *const s_pBuffer = reinterpret_cast<uint16_t *>(pixel::s_DmaBuffer + pixel::DMA_BUFFER_SIZE / 2);
// RTZ
static const uint16_t s_GPIO_PINs[] __attribute__ ((aligned (4))) = { GPIO_PINx } ;
static const auto *const s_pGPIO_PINs = reinterpret_cast<const uint32_t *>(&s_GPIO_PINs[0]);
static auto *const s_pT0H = reinterpret_cast<uint32_t *>(&s_DmaBuffer[0]);
static constexpr uint32_t RTZ_TIMER_PERIOD = (0.00000125f * MASTER_TIMER_CLOCK) - 1U;
// Clock based
static constexpr auto MAX_APA102 = ((DMA_BUFFER_SIZE / 8) - 8 ) / 4;
}  // namespace pixel

static volatile bool sv_isRunning;

extern "C" {
void TIMER3_IRQHandler() { // Slave
	const auto nIntFlag = TIMER_INTF(TIMER3);

	if ((nIntFlag & TIMER_INT_FLAG_CH0) == TIMER_INT_FLAG_CH0) {
		TIMER_CTL0(TIMER2) &= (~TIMER_CTL0_CEN);

		TIMER_DMAINTEN(TIMER2) &= (~TIMER_DMA_CH0D);
		TIMER_DMAINTEN(TIMER2) &= (~TIMER_DMA_CH2D);
		TIMER_DMAINTEN(TIMER2) &= (~TIMER_DMA_CH3D);

		sv_isRunning = false;

		GPIO_BC(GPIOx) = GPIO_PINx;
#ifndef NDEBUG
		GPIO_BOP(DEBUG_CS_GPIOx) = DEBUG_CS_GPIO_PINx;
#endif
	}

	TIMER_INTF(TIMER3) = ~nIntFlag;
}
}

WS28xxMulti *WS28xxMulti::s_pThis;

WS28xxMulti::WS28xxMulti() {
	DEBUG_ENTRY

	assert(s_pThis == nullptr);
	s_pThis = this;

	DEBUG_PRINTF("PORT_COUNT=%u", pixel::PORT_COUNT);

	auto& pixelConfiguration = PixelConfiguration::Get();

	pixelConfiguration.Validate();

	const auto type =  pixelConfiguration.GetType();
	const auto nLedsPerPixel = pixelConfiguration.GetLedsPerPixel();

	if ((type == pixel::Type::APA102) || (type == pixel::Type::SK9822) || (type == pixel::Type::P9813)) {
		DEBUG_PRINTF("MAX_APA102=%u", pixel::MAX_APA102);
		if (pixelConfiguration.GetCount() > pixel::MAX_APA102) {
			pixelConfiguration.SetCount(pixel::MAX_APA102);
			pixelConfiguration.Validate();
		}
	}

	const auto nCount = pixelConfiguration.GetCount();
	m_nBufSize = nCount * nLedsPerPixel;

	if ((type == pixel::Type::APA102) || (type == pixel::Type::SK9822) || (type == pixel::Type::P9813)) {
		m_nBufSize += nCount;
		m_nBufSize += 8;
	}

	m_nBufSize *= 8;

	DEBUG_PRINTF("s_DmaBuffer=%p, s_pBuffer=%p", pixel::s_DmaBuffer, pixel::s_pBuffer);
	DEBUG_PRINTF("m_nBufSize=%u [%u]", m_nBufSize, (m_nBufSize + 1024) / 1024);
	assert(m_nBufSize <= pixel::DMA_BUFFER_SIZE);

	/**
	 * GPIO Initialization
	 */

	rcu_periph_clock_enable(RCU_GPIOx);
#if !defined (GD32F4XX)
	gpio_init(GPIOx, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, GPIO_PINx);
#else
    gpio_mode_set(GPIOx, GPIO_MODE_OUTPUT, GPIO_PUPD_PULLDOWN, GPIO_PINx);
    gpio_output_options_set(GPIOx, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, GPIO_PINx);
#endif

	GPIO_BC(GPIOx) = GPIO_PINx;

#ifndef NDEBUG
	rcu_periph_clock_enable(DEBUG_CS_RCU_GPIOx);
#if !defined (GD32F4XX)
	gpio_init(DEBUG_CS_GPIOx, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, DEBUG_CS_GPIO_PINx);
#else
    gpio_mode_set(DEBUG_CS_GPIOx, GPIO_MODE_OUTPUT, GPIO_PUPD_PULLDOWN, DEBUG_CS_GPIO_PINx);
    gpio_output_options_set(DEBUG_CS_GPIOx, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, DEBUG_CS_GPIO_PINx);
#endif

	GPIO_BOP(DEBUG_CS_GPIOx) = DEBUG_CS_GPIO_PINx;
#endif

	if (pixelConfiguration.IsRTZProtocol()) {
		Setup(pixelConfiguration.GetLowCode(), pixelConfiguration.GetHighCode());
	} else {
		Setup(pixelConfiguration.GetClockSpeedHz());
	}

	dma::memcpy32_init();

	DEBUG_EXIT
}

WS28xxMulti::~WS28xxMulti() {
	DEBUG_ENTRY

	s_pThis = nullptr;

	DEBUG_EXIT
}

void WS28xxMulti::Setup(uint8_t nLowCode, uint8_t nHighCode) {
	DEBUG_ENTRY

	/**
	 * BEGIN Timer's
	 *
	 * Timer 2 is Master -> TIMER2_TRGO
	 * Timer 3 is Slave -> ITI2
	 *
	 */

	const auto nT0H = (__builtin_popcount(nLowCode) * (pixel::RTZ_TIMER_PERIOD + 1)) / 8;
	const auto nT1H = (__builtin_popcount(nHighCode) * (pixel::RTZ_TIMER_PERIOD + 1)) / 8;

	DEBUG_PRINTF("RTZ_TIMER_PERIOD=%u, nT0H=%u, nT1H=%u", pixel::RTZ_TIMER_PERIOD, nT0H, nT1H);

	timer_parameter_struct timer_initpara;

	/**
	 * Timer 2 Master
	 * There is no DMA Channel for Timer 2 Channel 1
	 */

	rcu_periph_clock_enable(RCU_TIMER2);

	timer_deinit(TIMER2);

	timer_initpara.prescaler = 0;
	timer_initpara.alignedmode = TIMER_COUNTER_EDGE;
	timer_initpara.counterdirection = TIMER_COUNTER_UP;
	timer_initpara.period = pixel::RTZ_TIMER_PERIOD;	// 1.25 us
	timer_initpara.clockdivision = TIMER_CKDIV_DIV1;

	timer_init(TIMER2, &timer_initpara);

	timer_master_slave_mode_config(TIMER2, TIMER_MASTER_SLAVE_MODE_DISABLE);
	timer_master_output_trigger_source_select(TIMER2, TIMER_TRI_OUT_SRC_CH0);

	timer_channel_output_mode_config(TIMER2, TIMER_CH_0, TIMER_OC_MODE_ACTIVE);
	timer_channel_output_mode_config(TIMER2, TIMER_CH_2, TIMER_OC_MODE_ACTIVE);
	timer_channel_output_mode_config(TIMER2, TIMER_CH_3, TIMER_OC_MODE_ACTIVE);

	timer_channel_output_pulse_value_config(TIMER2, TIMER_CH_0, 1);		// High
	assert(nT0H < UINT16_MAX);
	timer_channel_output_pulse_value_config(TIMER2, TIMER_CH_2, static_cast<uint16_t>(nT0H));
	assert(nT1H < UINT16_MAX);
	timer_channel_output_pulse_value_config(TIMER2, TIMER_CH_3, static_cast<uint16_t>(nT1H));

	// Timer 3 Slave

	rcu_periph_clock_enable(RCU_TIMER3);

	timer_deinit(TIMER3);

	timer_initpara.prescaler = 0;
	timer_initpara.alignedmode = TIMER_COUNTER_EDGE;
	timer_initpara.counterdirection = TIMER_COUNTER_UP;
	timer_initpara.period = static_cast<uint32_t>(~0);
	timer_initpara.clockdivision = TIMER_CKDIV_DIV1;

	timer_init(TIMER3, &timer_initpara);

	timer_master_slave_mode_config(TIMER3, TIMER_MASTER_SLAVE_MODE_DISABLE);
	timer_slave_mode_select(TIMER3, TIMER_SLAVE_MODE_EXTERNAL0);
	timer_input_trigger_source_select(TIMER3, TIMER_SMCFG_TRGSEL_ITI2);

	timer_channel_output_mode_config(TIMER3, TIMER_CH_0, TIMER_OC_MODE_ACTIVE);
	assert((1 + m_nBufSize) < UINT16_MAX);
	timer_channel_output_pulse_value_config(TIMER3, TIMER_CH_0, static_cast<uint16_t>(1 + m_nBufSize));

	timer_interrupt_enable(TIMER3, TIMER_INT_CH0);

	NVIC_SetPriority(TIMER3_IRQn, 0);
	NVIC_EnableIRQ(TIMER3_IRQn);

	/**
	 * END Timer's
	 */

	/**
	 * START DMA configuration
	 */

	DMA_PARAMETER_STRUCT dma_init_struct;
	rcu_periph_clock_enable(TIMER2_RCU_DMAx);

	// Timer 2 Channel 0
	dma_deinit(TIMER2_DMAx, TIMER2_CH0_DMA_CHx);
	dma_struct_para_init(&dma_init_struct);
	dma_init_struct.direction = DMA_MEMORY_TO_PERIPHERAL;
#if !defined (GD32F4XX)
	dma_init_struct.memory_addr = reinterpret_cast<uint32_t>(pixel::s_pGPIO_PINs);
#else
	dma_init_struct.memory0_addr = reinterpret_cast<uint32_t>(pixel::s_pGPIO_PINs);
#endif
	dma_init_struct.memory_inc = DMA_MEMORY_INCREASE_DISABLE;
#if !defined (GD32F4XX)
	dma_init_struct.memory_width = DMA_MEMORY_WIDTH_16BIT;
#endif
	dma_init_struct.periph_addr = GPIOx + GPIOx_BOP_OFFSET;
	dma_init_struct.periph_inc = DMA_PERIPH_INCREASE_DISABLE;
#if !defined (GD32F4XX)
	dma_init_struct.periph_width = DMA_PERIPHERAL_WIDTH_16BIT;
#else
	dma_init_struct.periph_memory_width = DMA_PERIPH_WIDTH_16BIT;
#endif
	dma_init_struct.priority = DMA_PRIORITY_LOW;
	dma_init(TIMER2_DMAx, TIMER2_CH0_DMA_CHx, &dma_init_struct);
	dma_circulation_disable(TIMER2_DMAx, TIMER2_CH0_DMA_CHx);
	dma_memory_to_memory_disable(TIMER2_DMAx, TIMER2_CH0_DMA_CHx);
#if defined (GD32F4XX)
	dma_channel_subperipheral_select(TIMER2_DMAx, TIMER2_CH0_DMA_CHx, TIMER2_CH0_DMA_SUBPERIx);
#endif

	// Timer 2 Channel 2
	dma_deinit(TIMER2_DMAx, TIMER2_CH2_DMA_CHx);
	dma_struct_para_init(&dma_init_struct);
	dma_init_struct.direction = DMA_MEMORY_TO_PERIPHERAL;
#if !defined (GD32F4XX)
	dma_init_struct.memory_addr = reinterpret_cast<uint32_t>(pixel::s_pT0H);
#else
	dma_init_struct.memory0_addr = reinterpret_cast<uint32_t>(pixel::s_pT0H);
#endif
	dma_init_struct.memory_inc = DMA_MEMORY_INCREASE_ENABLE;
#if !defined (GD32F4XX)
	dma_init_struct.memory_width = DMA_MEMORY_WIDTH_16BIT;
#endif
	dma_init_struct.periph_addr = GPIOx + GPIOx_BC_OFFSET;
	dma_init_struct.periph_inc = DMA_PERIPH_INCREASE_DISABLE;
#if !defined (GD32F4XX)
	dma_init_struct.periph_width = DMA_PERIPHERAL_WIDTH_16BIT;
#else
	dma_init_struct.periph_memory_width = DMA_PERIPH_WIDTH_16BIT;
#endif
	dma_init_struct.priority = DMA_PRIORITY_LOW;
	dma_init(TIMER2_DMAx, TIMER2_CH2_DMA_CHx, &dma_init_struct);
	dma_circulation_disable(TIMER2_DMAx, TIMER2_CH2_DMA_CHx);
	dma_memory_to_memory_disable(TIMER2_DMAx, TIMER2_CH2_DMA_CHx);
#if defined (GD32F4XX)
	dma_channel_subperipheral_select(TIMER2_DMAx, TIMER2_CH2_DMA_CHx, TIMER2_CH2_DMA_SUBPERIx);
#endif

	// Timer 2 Channel 3
	dma_deinit(TIMER2_DMAx, TIMER2_CH3_DMA_CHx);
	dma_struct_para_init(&dma_init_struct);
	dma_init_struct.direction = DMA_MEMORY_TO_PERIPHERAL;
#if !defined (GD32F4XX)
	dma_init_struct.memory_addr = reinterpret_cast<uint32_t>(pixel::s_pGPIO_PINs);
#else
	dma_init_struct.memory0_addr = reinterpret_cast<uint32_t>(pixel::s_pGPIO_PINs);
#endif
	dma_init_struct.memory_inc = DMA_MEMORY_INCREASE_DISABLE;
#if !defined (GD32F4XX)
	dma_init_struct.memory_width = DMA_MEMORY_WIDTH_16BIT;
#endif
	dma_init_struct.periph_addr = GPIOx + GPIOx_BC_OFFSET;
	dma_init_struct.periph_inc = DMA_PERIPH_INCREASE_DISABLE;
#if !defined (GD32F4XX)
	dma_init_struct.periph_width = DMA_PERIPHERAL_WIDTH_16BIT;
#else
	dma_init_struct.periph_memory_width = DMA_PERIPH_WIDTH_16BIT;
#endif
	dma_init_struct.priority = DMA_PRIORITY_LOW;
	dma_init(TIMER2_DMAx, TIMER2_CH3_DMA_CHx, &dma_init_struct);
	dma_circulation_disable(TIMER2_DMAx, TIMER2_CH3_DMA_CHx);
	dma_memory_to_memory_disable(TIMER2_DMAx, TIMER2_CH3_DMA_CHx);
#if defined (GD32F4XX)
	dma_channel_subperipheral_select(TIMER2_DMAx, TIMER2_CH3_DMA_CHx, TIMER2_CH3_DMA_SUBPERIx);
#endif

	/**
	 * END DMA configuration
	 */

	DEBUG_EXIT
}

void WS28xxMulti::Setup(uint32_t nFrequency) {
	DEBUG_ENTRY

	/**
	 * BEGIN GPIO
	 */

	rcu_periph_clock_enable(TIMER2CH0_RCU_GPIOx);
#if !defined (GD32F4XX)
	 rcu_periph_clock_enable(RCU_AF);
	 gpio_init(TIMER2CH0_GPIOx, GPIO_MODE_AF_PP, GPIO_OSPEED_50MHZ, TIMER2CH0_GPIO_PINx);
#else
	gpio_mode_set(TIMER2CH0_GPIOx, GPIO_MODE_AF, GPIO_PUPD_NONE, TIMER2CH0_GPIO_PINx);
	gpio_output_options_set(TIMER2CH0_GPIOx, GPIO_OTYPE_PP, GPIO_OSPEED_50MHZ, TIMER2CH0_GPIO_PINx);
	gpio_af_set(TIMER2CH0_GPIOx, GPIO_AF_2, TIMER2CH0_GPIO_PINx);
#endif

	/**
	 * END GPIO
	 */

	/**
	 * BEGIN Timer's
	 *
	 * Timer 2 is Master -> TIMER2_TRGO
	 * Timer 3 is Slave -> ITI2
	 *
	 */

	/**
	 * Frequency = MASTER_TIMER_CLOCK  / x => x = MASTER_TIMER_CLOCK / Frequency
	 */

	auto nTicker = (MASTER_TIMER_CLOCK / nFrequency);

	DEBUG_PRINTF("nFrequency=%u, nTicker=%u", nFrequency, nTicker);

	if (nTicker < 12) {	// ((nTicker / 4) - 1) >= 2
		nTicker = 12;
	}

	/**
	 * Timer 2 Master
	 *
	 * Implementation note: There is no DMA Channel for Timer 2 Channel 1
	 */

    rcu_periph_clock_enable(RCU_TIMER2);
    timer_deinit(TIMER2);

    timer_parameter_struct timer_initpara;
    timer_initpara.prescaler         = 0;
    timer_initpara.alignedmode       = TIMER_COUNTER_EDGE;
    timer_initpara.counterdirection  = TIMER_COUNTER_UP;
    timer_initpara.period            = nTicker - 1;
    timer_initpara.clockdivision     = TIMER_CKDIV_DIV1;
    timer_initpara.repetitioncounter = 0;
    timer_init(TIMER2,&timer_initpara);

    timer_oc_parameter_struct timer_ocintpara;
    timer_ocintpara.ocpolarity  = TIMER_OC_POLARITY_LOW;
    timer_ocintpara.outputstate = TIMER_CCX_ENABLE;
    timer_ocintpara.ocnpolarity  = TIMER_OCN_POLARITY_HIGH;
    timer_ocintpara.outputnstate = TIMER_CCXN_DISABLE;
    timer_ocintpara.ocidlestate  = TIMER_OC_IDLE_STATE_HIGH;
    timer_ocintpara.ocnidlestate = TIMER_OCN_IDLE_STATE_LOW;

	timer_channel_output_config(TIMER2, TIMER_CH_0, &timer_ocintpara);
	assert(((nTicker / 2) - 1) < UINT16_MAX);
	timer_channel_output_pulse_value_config(TIMER2, TIMER_CH_0, static_cast<uint16_t>((nTicker / 2) - 1));
	timer_channel_output_mode_config(TIMER2, TIMER_CH_0, TIMER_OC_MODE_PWM0);
	timer_channel_output_shadow_config(TIMER2, TIMER_CH_0, TIMER_OC_SHADOW_DISABLE);

	timer_channel_output_mode_config(TIMER2, TIMER_CH_2, TIMER_OC_MODE_ACTIVE);
	timer_channel_output_mode_config(TIMER2, TIMER_CH_3, TIMER_OC_MODE_ACTIVE);

	timer_channel_output_pulse_value_config(TIMER2, TIMER_CH_2, 1);
	assert(((nTicker / 4) - 1) >= 2);
	assert(((nTicker / 4) - 1) < UINT16_MAX);
	timer_channel_output_pulse_value_config(TIMER2, TIMER_CH_3, static_cast<uint16_t>((nTicker / 4) - 1));

	timer_master_slave_mode_config(TIMER2, TIMER_MASTER_SLAVE_MODE_DISABLE);
	timer_master_output_trigger_source_select(TIMER2, TIMER_TRI_OUT_SRC_CH0);

	// Timer 3 Slave

	rcu_periph_clock_enable(RCU_TIMER3);

	timer_deinit(TIMER3);

	timer_initpara.prescaler = 0;
	timer_initpara.alignedmode = TIMER_COUNTER_EDGE;
	timer_initpara.counterdirection = TIMER_COUNTER_UP;
	timer_initpara.period = static_cast<uint32_t>(~0);
	timer_initpara.clockdivision = TIMER_CKDIV_DIV1;

	timer_init(TIMER3, &timer_initpara);

	timer_master_slave_mode_config(TIMER3, TIMER_MASTER_SLAVE_MODE_DISABLE);
	timer_slave_mode_select(TIMER3, TIMER_SLAVE_MODE_EXTERNAL0);
	timer_input_trigger_source_select(TIMER3, TIMER_SMCFG_TRGSEL_ITI2);

	timer_channel_output_mode_config(TIMER3, TIMER_CH_0, TIMER_OC_MODE_ACTIVE);
	assert(m_nBufSize < UINT16_MAX);
	timer_channel_output_pulse_value_config(TIMER3, TIMER_CH_0, static_cast<uint16_t>(m_nBufSize));

	timer_interrupt_enable(TIMER3, TIMER_INT_CH0);

	NVIC_SetPriority(TIMER3_IRQn, 0);
	NVIC_EnableIRQ(TIMER3_IRQn);

	/**
	 * END Timer's
	 */

	/**
	 * START DMA configuration
	 */

	DMA_PARAMETER_STRUCT dma_init_struct;
	rcu_periph_clock_enable(TIMER2_RCU_DMAx);

	// Timer 2 Channel 2
	dma_deinit(TIMER2_DMAx, TIMER2_CH2_DMA_CHx);
	dma_struct_para_init(&dma_init_struct);
	dma_init_struct.direction = DMA_MEMORY_TO_PERIPHERAL;
#if !defined (GD32F4XX)
	dma_init_struct.memory_addr = reinterpret_cast<uint32_t>(pixel::s_pGPIO_PINs);
#else
	dma_init_struct.memory0_addr = reinterpret_cast<uint32_t>(pixel::s_pGPIO_PINs);
#endif
	dma_init_struct.memory_inc = DMA_MEMORY_INCREASE_DISABLE;
#if !defined (GD32F4XX)
	dma_init_struct.memory_width = DMA_MEMORY_WIDTH_16BIT;
#endif
	dma_init_struct.periph_addr = GPIOx + GPIOx_BC_OFFSET;;
	dma_init_struct.periph_inc = DMA_PERIPH_INCREASE_DISABLE;
#if !defined (GD32F4XX)
	dma_init_struct.periph_width = DMA_PERIPHERAL_WIDTH_16BIT;
#else
	dma_init_struct.periph_memory_width = DMA_PERIPH_WIDTH_16BIT;
#endif
	dma_init_struct.priority = DMA_PRIORITY_LOW;
	dma_init(TIMER2_DMAx, TIMER2_CH2_DMA_CHx, &dma_init_struct);
	/* configure DMA mode */
	dma_circulation_disable(TIMER2_DMAx, TIMER2_CH2_DMA_CHx);
	dma_memory_to_memory_disable(TIMER2_DMAx, TIMER2_CH2_DMA_CHx);
#if defined (GD32F4XX)
	dma_channel_subperipheral_select(TIMER2_DMAx, TIMER2_CH2_DMA_CHx, TIMER2_CH2_DMA_SUBPERIx);
#endif

	// Timer 2 Channel 3
	dma_deinit(TIMER2_DMAx, TIMER2_CH3_DMA_CHx);
	dma_struct_para_init(&dma_init_struct);
	dma_init_struct.direction = DMA_MEMORY_TO_PERIPHERAL;
#if !defined (GD32F4XX)
	dma_init_struct.memory_addr = reinterpret_cast<uint32_t>(pixel::s_DmaBuffer);
#else
	dma_init_struct.memory0_addr = reinterpret_cast<uint32_t>(pixel::s_DmaBuffer);
#endif
	dma_init_struct.memory_inc = DMA_MEMORY_INCREASE_ENABLE;
#if !defined (GD32F4XX)
	dma_init_struct.memory_width = DMA_MEMORY_WIDTH_16BIT;
#endif
	dma_init_struct.periph_addr = GPIOx + GPIOx_BOP_OFFSET;;
	dma_init_struct.periph_inc = DMA_PERIPH_INCREASE_DISABLE;
#if !defined (GD32F4XX)
	dma_init_struct.periph_width = DMA_PERIPHERAL_WIDTH_16BIT;
#else
	dma_init_struct.periph_memory_width = DMA_PERIPH_WIDTH_16BIT;
#endif
	dma_init_struct.priority = DMA_PRIORITY_LOW;
	dma_init(TIMER2_DMAx, TIMER2_CH3_DMA_CHx, &dma_init_struct);
	/* configure DMA mode */
	dma_circulation_disable(TIMER2_DMAx, TIMER2_CH3_DMA_CHx);
	dma_memory_to_memory_disable(TIMER2_DMAx, TIMER2_CH3_DMA_CHx);
#if defined (GD32F4XX)
	dma_channel_subperipheral_select(TIMER2_DMAx, TIMER2_CH3_DMA_CHx, TIMER2_CH3_DMA_SUBPERIx);
#endif

	/**
	 * END DMA configuration
	 */

	/**
	 * BEGIN Buffer setup
	 */

	auto& pixelConfiguration = PixelConfiguration::Get();
	const auto Type = pixelConfiguration.GetType();

	if ((Type == pixel::Type::APA102) || (Type == pixel::Type::SK9822) || (Type == pixel::Type::P9813)) {
		const auto nCount = pixelConfiguration.GetCount();
		for (auto nPortIndex = 0; nPortIndex < pixel::PORT_COUNT; nPortIndex++) {
			SetPixel4Bytes(nPortIndex, 0, 0, 0, 0, 0);

			if ((Type == pixel::Type::APA102) || (Type == pixel::Type::SK9822)) {
				SetPixel4Bytes(nPortIndex, 1U + nCount, 0xFF, 0xFF, 0xFF, 0xFF);
			} else {
				SetPixel4Bytes(nPortIndex, 1U + nCount, 0, 0, 0, 0);
			}
		}
	}

	/**
	 * END Buffer setup
	 */

	DEBUG_EXIT
}

void WS28xxMulti::Print() {
	auto& pixelConfiguration = PixelConfiguration::Get();
	const auto Type = pixelConfiguration.GetType();

	printf("Pixel\n");
	printf(" Type  : %s [%d]\n", pixel::pixel_get_type(Type), static_cast<int>(Type));
	printf(" Count : %d\n", pixelConfiguration.GetCount());

	if (!pixelConfiguration.IsRTZProtocol()) {
		printf(" Clock : %u Hz\n", pixelConfiguration.GetClockSpeedHz());
	} else {
		const auto Map = pixelConfiguration.GetMap();
		const auto nLowCode = pixelConfiguration.GetLowCode();
		const auto nHighCode = pixelConfiguration.GetHighCode();

		printf(" Mapping : %s [%d]\n", pixel::pixel_get_map(Map), static_cast<int>(Map));
		printf(" T0H     : %.2f [0x%X]\n", pixel::pixel_convert_TxH(nLowCode), nLowCode);
		printf(" T1H     : %.2f [0x%X]\n", pixel::pixel_convert_TxH(nHighCode), nHighCode);
	}
}

void WS28xxMulti::Update() {
	assert(!sv_isRunning);

	dma::memcpy32(reinterpret_cast<uint8_t *>(pixel::s_DmaBuffer), reinterpret_cast<uint8_t *>(pixel::s_DmaBuffer + pixel::DMA_BUFFER_SIZE / 2), m_nBufSize / 2);

	while (dma::memcpy32_is_active())
		;

#ifndef NDEBUG
	GPIO_BC(DEBUG_CS_GPIOx) = DEBUG_CS_GPIO_PINx;
#endif

	sv_isRunning = true;

	TIMER_CTL0(TIMER3) &= (~TIMER_CTL0_CEN);
	TIMER_CNT(TIMER3) = 0;

	TIMER_CTL0(TIMER2) &= (~TIMER_CTL0_CEN);
	TIMER_CNT(TIMER2) = 0;

	auto& pixelConfiguration = PixelConfiguration::Get();

	if (pixelConfiguration.IsRTZProtocol()) {
		DMA_CHCTL(TIMER2_DMAx, TIMER2_CH0_DMA_CHx) &= ~DMA_CHXCTL_CHEN;
		dma_interrupt_flag_clear(TIMER2_DMAx, TIMER2_CH0_DMA_CHx, DMA_INTF_FTFIF);
		DMA_CHMADDR(TIMER2_DMAx, TIMER2_CH0_DMA_CHx) = reinterpret_cast<uint32_t>(pixel::s_pGPIO_PINs);
		DMA_CHCNT(TIMER2_DMAx, TIMER2_CH0_DMA_CHx) = (m_nBufSize & DMA_CHXCNT_CNT);
		DMA_CHCTL(TIMER2_DMAx, TIMER2_CH0_DMA_CHx) |= DMA_CHXCTL_CHEN;

		DMA_CHCTL(TIMER2_DMAx, TIMER2_CH2_DMA_CHx) &= ~DMA_CHXCTL_CHEN;
		dma_interrupt_flag_clear(TIMER2_DMAx, TIMER2_CH2_DMA_CHx, DMA_INTF_FTFIF);
		DMA_CHMADDR(TIMER2_DMAx, TIMER2_CH2_DMA_CHx) = reinterpret_cast<uint32_t>(pixel::s_pT0H);
		DMA_CHCNT(TIMER2_DMAx, TIMER2_CH2_DMA_CHx) = ((m_nBufSize) & DMA_CHXCNT_CNT);
		DMA_CHCTL(TIMER2_DMAx, TIMER2_CH2_DMA_CHx) |= DMA_CHXCTL_CHEN;

		DMA_CHCTL(TIMER2_DMAx, TIMER2_CH3_DMA_CHx) &= ~DMA_CHXCTL_CHEN;
		dma_interrupt_flag_clear(TIMER2_DMAx, TIMER2_CH3_DMA_CHx, DMA_INTF_FTFIF);
		DMA_CHMADDR(TIMER2_DMAx, TIMER2_CH3_DMA_CHx) = reinterpret_cast<uint32_t>(pixel::s_pGPIO_PINs);
		DMA_CHCNT(TIMER2_DMAx, TIMER2_CH3_DMA_CHx) = ((m_nBufSize) & DMA_CHXCNT_CNT);
		DMA_CHCTL(TIMER2_DMAx, TIMER2_CH3_DMA_CHx) |= DMA_CHXCTL_CHEN;

		timer_dma_enable(TIMER2, TIMER_DMA_CH0D);
		timer_dma_enable(TIMER2, TIMER_DMA_CH2D);
		timer_dma_enable(TIMER2, TIMER_DMA_CH3D);
	} else {
		DMA_CHCTL(TIMER2_DMAx, TIMER2_CH2_DMA_CHx) &= ~DMA_CHXCTL_CHEN;
		dma_interrupt_flag_clear(TIMER2_DMAx, TIMER2_CH2_DMA_CHx, DMA_INTF_FTFIF);
		DMA_CHMADDR(TIMER2_DMAx, TIMER2_CH2_DMA_CHx) = reinterpret_cast<uint32_t>(pixel::s_pGPIO_PINs);
		DMA_CHCNT(TIMER2_DMAx, TIMER2_CH2_DMA_CHx) = (m_nBufSize & DMA_CHXCNT_CNT);
		DMA_CHCTL(TIMER2_DMAx, TIMER2_CH2_DMA_CHx) |= DMA_CHXCTL_CHEN;

		DMA_CHCTL(TIMER2_DMAx, TIMER2_CH3_DMA_CHx) &= ~DMA_CHXCTL_CHEN;
		dma_interrupt_flag_clear(TIMER2_DMAx, TIMER2_CH3_DMA_CHx, DMA_INTF_FTFIF);
		DMA_CHMADDR(TIMER2_DMAx, TIMER2_CH3_DMA_CHx) = reinterpret_cast<uint32_t>(pixel::s_DmaBuffer);
		DMA_CHCNT(TIMER2_DMAx, TIMER2_CH3_DMA_CHx) = (m_nBufSize & DMA_CHXCNT_CNT);
		DMA_CHCTL(TIMER2_DMAx, TIMER2_CH3_DMA_CHx) |= DMA_CHXCTL_CHEN;

		timer_dma_enable(TIMER2, TIMER_DMA_CH2D);
		timer_dma_enable(TIMER2, TIMER_DMA_CH3D);
	}

	TIMER_CTL0(TIMER3) |= TIMER_CTL0_CEN;
	TIMER_CTL0(TIMER2) |= TIMER_CTL0_CEN;
}

void WS28xxMulti::Blackout() {
	DEBUG_ENTRY

	/**
	 * Can be called any time. Make sure the previous transmit is ended.
	 */

	do {
		__DMB();
	} while (sv_isRunning);

	auto& pixelConfiguration = PixelConfiguration::Get();

	if (pixelConfiguration.IsRTZProtocol()) {
		for (uint32_t i = 0; i < pixel::DMA_BUFFER_SIZE / 2; i++) {
			pixel::s_pT0H[i] = GPIO_PINx | (static_cast<uint32_t>(GPIO_PINx) << 16);
		}
	} else {
		const auto Type = pixelConfiguration.GetType();
		if ((Type == pixel::Type::APA102) || (Type == pixel::Type::SK9822) || (Type == pixel::Type::P9813)) {
			const auto nCount = pixelConfiguration.GetCount();
			for (auto nPortIndex = 0; nPortIndex < pixel::PORT_COUNT; nPortIndex++) {
				SetPixel4Bytes(nPortIndex, 0, 0, 0, 0, 0);

				for (uint32_t nPixelIndex = 1; nPixelIndex <= nCount; nPixelIndex++) {
					SetPixel4Bytes(nPortIndex, nPixelIndex, 0xE0, 0, 0, 0);
				}

				if ((Type == pixel::Type::APA102) || (Type == pixel::Type::SK9822)) {
					SetPixel4Bytes(nPortIndex, 1U + nCount, 0xFF, 0xFF, 0xFF, 0xFF);
				} else {
					SetPixel4Bytes(nPortIndex, 1U + nCount, 0, 0, 0, 0);
				}
			}
		} else {
			assert(Type == pixel::Type::WS2801);
			auto *p = reinterpret_cast<uint32_t *>(&pixel::s_DmaBuffer[0]);
			for (uint32_t i = 0; i < pixel::DMA_BUFFER_SIZE / 2; i++) {
				p[i] = 0;
			}
		}
	}

	Update();

	/**
	 * A blackout may not be interrupted.
	 */

	do {
		__DMB();
	} while (sv_isRunning);

	DEBUG_EXIT
}


void WS28xxMulti::FullOn() {
	DEBUG_ENTRY

	/**
	 * Can be called any time. Make sure the previous transmit is ended.
	 */

	do {
		__DMB();
	} while (sv_isRunning);

	auto& pixelConfiguration = PixelConfiguration::Get();

	if (pixelConfiguration.IsRTZProtocol()) {
		for (uint32_t i = 0; i < pixel::DMA_BUFFER_SIZE / 2; i++) {
			pixel::s_pT0H[i] = 0;
		}
	} else {
		const auto Type = pixelConfiguration.GetType();
		if ((Type == pixel::Type::APA102) || (Type == pixel::Type::SK9822) || (Type == pixel::Type::P9813)) {
			const auto nCount = pixelConfiguration.GetCount();
			for (auto nPortIndex = 0; nPortIndex < pixel::PORT_COUNT; nPortIndex++) {
				SetPixel4Bytes(nPortIndex, 0, 0, 0, 0, 0);

				for (uint32_t nPixelIndex = 1; nPixelIndex <= nCount; nPixelIndex++) {
					SetPixel4Bytes(nPortIndex, nPixelIndex, 0xE0, 0xFF, 0xFF, 0xFF);
				}

				if ((Type == pixel::Type::APA102) || (Type == pixel::Type::SK9822)) {
					SetPixel4Bytes(nPortIndex, 1U + nCount, 0xFF, 0xFF, 0xFF, 0xFF);
				} else {
					SetPixel4Bytes(nPortIndex, 1U + nCount, 0, 0, 0, 0);
				}
			}
		} else {
			assert(Type == pixel::Type::WS2801);
			auto *p = reinterpret_cast<uint32_t *>(&pixel::s_DmaBuffer[0]);
			for (uint32_t i = 0; i < pixel::DMA_BUFFER_SIZE / 2; i++) {
				p[i] = 0xFF;
			}
		}
	}

	Update();

	/**
	 * May not be interrupted.
	 */

	do {
		__DMB();
	} while (sv_isRunning);

	DEBUG_EXIT
}

bool  WS28xxMulti::IsUpdating() {
	__DMB();
	return sv_isRunning;
}

#define BIT_SET(Addr, Bit) {																						\
	*(volatile uint32_t *) (BITBAND_SRAM_BASE + (((uint32_t)&Addr) - SRAM_BASE) * 32U + (Bit & 0xFF) * 4U) = 0x1;	\
}

#define BIT_CLEAR(Addr, Bit) {																						\
	*(volatile uint32_t *) (BITBAND_SRAM_BASE + (((uint32_t)&(Addr)) - SRAM_BASE) * 32U + (Bit & 0xFF) * 4U) = 0x0;	\
}

void WS28xxMulti::SetColourRTZ(const uint32_t nPortIndex, const uint32_t nPixelIndex, const uint8_t nColour1, const uint8_t nColour2, const uint8_t nColour3) {
	assert(nPortIndex < pixel::PORT_COUNT);

	uint32_t j = 0;
	const auto k = nPixelIndex * pixel::single::RGB;
	const auto nBit = nPortIndex + GPIO_PIN_OFFSET;
	auto *p = &pixel::s_pBuffer[k];

	for (uint8_t mask = 0x80; mask != 0; mask = static_cast<uint8_t>(mask >> 1)) {
		if (!(mask & nColour1)) {
			BIT_SET(p[j], nBit);
		} else {
			BIT_CLEAR(p[j], nBit);
		}
		if (!(mask & nColour2)) {
			BIT_SET(p[8 + j], nBit);
		} else {
			BIT_CLEAR(p[8 + j], nBit);
		}
		if (!(mask & nColour3)) {
			BIT_SET(p[16 + j], nBit);
		} else {
			BIT_CLEAR(p[16 + j], nBit);
		}

		j++;
	}
}

void WS28xxMulti::SetColourWS2801(const uint32_t nPortIndex, const uint32_t nPixelIndex, const uint8_t nColour1, const uint8_t nColour2, const uint8_t nColour3) {
	assert(nPortIndex < 16);
	assert(nPixelIndex < m_nBufSize / 8);		//FIXME 8

	uint32_t j = 0;
	const auto k = nPixelIndex * pixel::single::RGB;
	const auto nBit = nPortIndex + GPIO_PIN_OFFSET;
	auto *p = &pixel::s_DmaBuffer[k];

	for (uint8_t mask = 0x80; mask != 0; mask = static_cast<uint8_t>(mask >> 1)) {
		if (mask & nColour1) {
			BIT_SET(p[j], nBit);
		} else {
			BIT_CLEAR(p[j], nBit);
		}
		if (mask & nColour2) {
			BIT_SET(p[8 + j], nBit);
		} else {
			BIT_CLEAR(p[8 + j], nBit);
		}
		if (mask & nColour3) {
			BIT_SET(p[16 + j], nBit);
		} else {
			BIT_CLEAR(p[16 + j], nBit);
		}

		j++;
	}
}

void WS28xxMulti::SetPixel4Bytes(const uint32_t nPortIndex, const uint32_t nPixelIndex, const uint8_t nCtrl, const uint8_t nColour1, const uint8_t nColour2, const uint8_t nColour3) {
	assert(nPortIndex < 16);
	assert(nPixelIndex < m_nBufSize / 8);	//FIXME 8

	uint32_t j = 0;
	const auto k = nPixelIndex * pixel::single::RGBW;
	const auto nBit = nPortIndex + GPIO_PIN_OFFSET;
	auto *p = &pixel::s_DmaBuffer[k];

	for (uint8_t mask = 0x80; mask != 0; mask = static_cast<uint8_t>(mask >> 1)) {
		if (mask & nCtrl) {
			BIT_SET(p[j], nBit);
		} else {
			BIT_CLEAR(p[j], nBit);
		}

		if (mask & nColour1) {
			BIT_SET(p[8 + j], nBit);
		} else {
			BIT_CLEAR(p[8 + j], nBit);
		}

		if (mask & nColour2) {
			BIT_SET(p[16 + j], nBit);
		} else {
			BIT_CLEAR(p[16 + j], nBit);
		}

		if (mask & nColour3) {
			BIT_SET(p[24 + j], nBit);
		} else {
			BIT_CLEAR(p[24 + j], nBit);
		}

		j++;
	}
}

void WS28xxMulti::SetColourRTZ(const uint32_t nPortIndex, const uint32_t nPixelIndex, uint8_t nRed, uint8_t nGreen, uint8_t nBlue, uint8_t nWhite) {
	assert(nPortIndex < 16);
	assert(nPixelIndex < m_nBufSize / 8);	//FIXME 8

#if defined(CONFIG_PIXELDMX_ENABLE_GAMMATABLE)
	const auto pGammaTable = pixelConfiguration.GetGammaTable();

	nRed = pGammaTable[nRed];
	nGreen = pGammaTable[nGreen];
	nBlue = pGammaTable[nBlue];
	nWhite = pGammaTable[nWhite];
#endif

	const auto k = nPixelIndex * pixel::single::RGBW;
	const auto nBit = nPortIndex + GPIO_PIN_OFFSET;

	auto *p = &pixel::s_DmaBuffer[k];
	uint32_t j = 0;

	for (uint8_t mask = 0x80; mask != 0; mask = static_cast<uint8_t>(mask >> 1)) {
		// GRBW
		if (!(mask & nGreen)) {
			BIT_SET(p[j], nBit);
		} else {
			BIT_CLEAR(p[j], nBit);
		}

		if (!(mask & nRed)) {
			BIT_SET(p[8 + j], nBit);
		} else {
			BIT_CLEAR(p[8 + j], nBit);
		}

		if (!(mask & nBlue)) {
			BIT_SET(p[16 + j], nBit);
		} else {
			BIT_CLEAR(p[16 + j], nBit);
		}

		if (!(mask & nWhite)) {
			BIT_SET(p[24 + j], nBit);
		} else {
			BIT_CLEAR(p[24 + j], nBit);
		}

		j++;
	}
}
