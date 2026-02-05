/**
 * @file usb.cpp
 *
 */
/* Copyright (C) 2023-2026 by Arjan van Vught mailto:info@gd32-dmx.org
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

#include <cassert>
#include <cstdint>

#include "gd32.h"
#include "firmware/debug/debug_debug.h"

#if defined(GD32F30X)
#include "usbd_conf.h"
#else
#ifndef USE_USB_FS
#error
#endif
#endif
#if defined(USB_HOST_VBUS_GPIOx)
void usb_mdelay(uint32_t);
#endif

void UsbRcuConfig()
{
#if !defined(GD32F4XX)
#if defined(GD32F30X)
    DEBUG_ENTRY();

    uint32_t kSystemClock = rcu_clock_freq_get(CK_SYS);

    // enable USB pull-up pin clock
    rcu_periph_clock_enable(RCU_AHBPeriph_GPIO_PULLUP);

    if (48000000U == kSystemClock)
    {
        rcu_usb_clock_config(RCU_CKUSB_CKPLL_DIV1);
    }
    else if (72000000U == kSystemClock)
    {
        rcu_usb_clock_config(RCU_CKUSB_CKPLL_DIV1_5);
    }
    else if (96000000U == kSystemClock)
    {
        rcu_usb_clock_config(RCU_CKUSB_CKPLL_DIV2);
    }
    else if (120000000U == kSystemClock)
    {
        rcu_usb_clock_config(RCU_CKUSB_CKPLL_DIV2_5);
    }
    else
    {
        assert(false && "Invalid kSystemClock");
    }

    // enable USB APB1 clock
    rcu_periph_clock_enable(RCU_USBD);

    DEBUG_EXIT();
#else
    DEBUG_ENTRY();

    const auto kSystemClock = rcu_clock_freq_get(CK_SYS);
    uint32_t usbfs_prescaler = 0U;

    if (48000000U == kSystemClock)
    {
        usbfs_prescaler = RCU_CKUSB_CKPLL_DIV1;
    }
    else if (72000000U == kSystemClock)
    {
        usbfs_prescaler = RCU_CKUSB_CKPLL_DIV1_5;
    }
    else if (96000000U == kSystemClock)
    {
        usbfs_prescaler = RCU_CKUSB_CKPLL_DIV2;
    }
    else if (120000000U == kSystemClock)
    {
        usbfs_prescaler = RCU_CKUSB_CKPLL_DIV2_5;
    }
    else
    {
        assert(false && "Invalid kSystemClock");
    }

    rcu_usbfs_trng_clock_config(usbfs_prescaler);
    rcu_periph_clock_enable(RCU_USBFS);

    DEBUG_EXIT();
#endif
#else
    DEBUG_ENTRY();

    // configure the PLLSAIP = 48MHz, PLLSAI_N = 288, PLLSAI_P = 6, PLLSAI_R = 2
    rcu_pllsai_config(288U, 6U, 2U);
    // enable PLLSAI
    RCU_CTL |= RCU_CTL_PLLSAIEN;
    /* wait until PLLSAI is stable */
    while (0U == (RCU_CTL & RCU_CTL_PLLSAISTB))
    {
    }

    rcu_pll48m_clock_config(RCU_PLL48MSRC_PLLSAIP);
    rcu_ck48m_clock_config(RCU_CK48MSRC_PLL48M);

    rcu_periph_clock_enable(RCU_USBFS);

    DEBUG_EXIT();
#endif
}

void UsbGpioConfig()
{
#if defined(GPIO_INIT)
#if defined(GD32F30X)
    DEBUG_ENTRY();
    // configure usb pull-up pin
    rcu_periph_clock_enable(RCU_AHBPeriph_GPIO_PULLUP);
    gpio_init(USB_PULLUP, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, USB_PULLUP_PIN);
    // Start DISCONNECTED – let usbd_connect() decide when to attach
    gpio_bit_reset(USB_PULLUP, USB_PULLUP_PIN);
    DEBUG_EXIT();
#else
#endif
#else
    DEBUG_ENTRY();
    rcu_periph_clock_enable(RCU_SYSCFG);
    rcu_periph_clock_enable(RCU_GPIOA);

    gpio_mode_set(GPIOA, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO_PIN_11 | GPIO_PIN_12);
    gpio_output_options_set(GPIOA, GPIO_OTYPE_PP, GPIO_OSPEED_MAX, GPIO_PIN_11 | GPIO_PIN_12);

    gpio_af_set(GPIOA, GPIO_AF_10, GPIO_PIN_11 | GPIO_PIN_12);
    DEBUG_EXIT();
#endif
}

void UsbVbusConfig()
{
#if defined(USB_HOST_VBUS_GPIOx)
    rcu_periph_clock_enable(USB_HOST_VBUS_RCU_GPIOx);

#if defined(GPIO_INIT)
    gpio_init(USB_HOST_VBUS_GPIOx, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, USB_HOST_VBUS_GPIO_PINx);
#else
    gpio_mode_set(USB_HOST_VBUS_GPIOx, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, USB_HOST_VBUS_GPIO_PINx);
    gpio_output_options_set(USB_HOST_VBUS_GPIOx, GPIO_OTYPE_PP, GPIO_OSPEED_MAX, USB_HOST_VBUS_GPIO_PINx);
#endif

    gpio_bit_set(USB_HOST_VBUS_GPIOx, USB_HOST_VBUS_GPIO_PINx);

    usb_mdelay(200);
#endif
}

void UsbIntrConfig()
{
#if defined(GD32F30X)
    DEBUG_ENTRY();

    // 2 bits for preemption priority, 2 bits for subpriority
    nvic_priority_group_set(NVIC_PRIGROUP_PRE2_SUB2);
    // enable the USB low priority interrupt
    nvic_irq_enable(static_cast<uint8_t>(USBD_LP_CAN0_RX0_IRQn), 2U, 0U);
    // enable the USB low priority interrupt
    nvic_irq_enable(static_cast<uint8_t>(USBD_HP_CAN0_TX_IRQn), 1U, 0U);

    DEBUG_ENTRY();
#else
    DEBUG_ENTRY();

    nvic_priority_group_set(NVIC_PRIGROUP_PRE2_SUB2);
    nvic_irq_enable(static_cast<uint8_t>(USBFS_IRQn), 2U, 0U);

    DEBUG_ENTRY();
#endif
}
