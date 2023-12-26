/**
 * @file main.cpp
 *
 */
/* Copyright (C) 2023 by Arjan van Vught mailto:info@gd32-dmx.org
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

#pragma GCC push_options
#pragma GCC optimize ("O3")
#pragma GCC optimize ("-funroll-loops")
#pragma GCC optimize ("-fprefetch-loop-arrays")

#include <cstdint>
#include <cassert>
#include <time.h>

#include "hardware.h"
#include "network.h"
#include "networkconst.h"

#include "mdns.h"

#if defined (ENABLE_HTTPD)
# include "httpd/httpd.h"
#endif

#include "displayudf.h"
#include "displayudfparams.h"
#include "displayhandler.h"
#include "display_timeout.h"

#include "remoteconfig.h"
#include "remoteconfigparams.h"

#include "configstore.h"
#include "storedisplayudf.h"
#include "storenetwork.h"
#include "storeremoteconfig.h"

#include "firmwareversion.h"
#include "software_version.h"

#include "gd32_gpio.h"
#include "gd32_dma_memcpy32.h"

inline void _memcpy(void *__restrict__ dest, void const *__restrict__ src, size_t n) {
	auto *plDst = reinterpret_cast<uintptr_t *>(dest);
	auto const *plSrc = reinterpret_cast<uintptr_t const *>(src);

	assert((reinterpret_cast<uint32_t>(plDst) & 0x3) == 0);
	assert((reinterpret_cast<uint32_t>(plSrc) & 0x3) == 0);

	while (n >= 4) {
		*plDst++ = *plSrc++;
		n -= 4;
	}

	auto *pcDst = reinterpret_cast<uint8_t *>(plDst);
	auto const *pcSrc = reinterpret_cast<uint8_t const *>(plSrc);

	while (n--) {
		*pcDst++ = *pcSrc++;
	}
}

bool compare(void *src, void *dst, uint32_t length) {
	uint8_t *s = reinterpret_cast<uint8_t *>(src);
	uint8_t *d = reinterpret_cast<uint8_t *>(dst);

	while (length--) {
		if (*s++ != *d++) {
			return false;
		}
	}
	return true;
}

void Hardware::RebootHandler() {
}

#if defined (GD32F20X) || defined (GD32F4XX)
# define SECTION_DMA_BUFFER					__attribute__ ((section (".pixel")))
#else
# define SECTION_DMA_BUFFER
#endif

static uint16_t s_DmaBuffer[2 * 1024 * 16] __attribute__ ((aligned (4))) SECTION_DMA_BUFFER;
static constexpr auto DMA_BUFFER_SIZE = sizeof(s_DmaBuffer) / sizeof(s_DmaBuffer[0]);

void main() {
	Hardware hw;
	DisplayUdf display;
	ConfigStore configStore;
	display.TextStatus(NetworkConst::MSG_NETWORK_INIT, Display7SegmentMessage::INFO_NETWORK_INIT, CONSOLE_YELLOW);
	StoreNetwork storeNetwork;
	Network nw(&storeNetwork);
	MDNS mDns;
	display.TextStatus(NetworkConst::MSG_NETWORK_STARTED, Display7SegmentMessage::INFO_NONE, CONSOLE_GREEN);
	FirmwareVersion fw(SOFTWARE_VERSION, __DATE__, __TIME__);

	fw.Print("Debug");
	nw.Print();

#if defined (ENABLE_HTTPD)
	HttpDaemon httpDaemon;
#endif

	display.SetTitle("Debug");
	display.Set(2, displayudf::Labels::HOSTNAME);
	display.Set(3, displayudf::Labels::IP);
	display.Set(4, displayudf::Labels::VERSION);
	display.Set(5, displayudf::Labels::BOARDNAME);
	display.Set(6, displayudf::Labels::NETMASK);

	DisplayUdfParams displayUdfParams;

	displayUdfParams.Load();
	displayUdfParams.Set(&display);

	display.Show();

	RemoteConfig remoteConfig(remoteconfig::Node::RDMNET_LLRP_ONLY, remoteconfig::Output::CONFIG, 0);

	RemoteConfigParams remoteConfigParams;
	remoteConfigParams.Load();
	remoteConfigParams.Set(&remoteConfig);

	while (configStore.Flash())
		;

	mDns.Print();

	hw.WatchdogInit();

	dma::memcpy32_init();

	uint32_t m_nBufSize = 170 * 4 * 3;
	m_nBufSize *= 8;

	printf("m_nBufSize=%u [%u] <= {%u}\n", m_nBufSize, (m_nBufSize + 1024) / 1024, DMA_BUFFER_SIZE);

	gd32_gpio_fsel(GPIO_EXT_26, GPIO_FSEL_OUTPUT);
	gd32_gpio_clr(GPIO_EXT_26);

	auto t1 = time(nullptr);

	for (;;) {
		hw.WatchdogFeed();
		nw.Run();
		remoteConfig.Run();
		configStore.Flash();
		mDns.Run();
#if defined (ENABLE_HTTPD)
		httpDaemon.Run();
#endif
		display.Run();
		hw.Run();

		const auto t2 = time(nullptr);

		if (t1 != t2) {
			t1 = t2;

			auto *source8 = reinterpret_cast<uint8_t *>(s_DmaBuffer);
			auto *destination8 = reinterpret_cast<uint8_t *>(s_DmaBuffer + DMA_BUFFER_SIZE / 2);

			printf("source=%p, destination=%p\n", source8, destination8);

			for (uint32_t i = 0; i < (m_nBufSize * 2); i++) {
				source8[i] = i & 0xFF;
			}

			memset(destination8, 0x00, m_nBufSize * 2);

			printf("dma ");

			gd32_gpio_set(GPIO_EXT_26);

			dma::memcpy32(destination8, source8, m_nBufSize / 2);

			while (dma::memcpy32_is_active())
				;

			gd32_gpio_clr(GPIO_EXT_26);

			printf("%s ,", compare(source8, destination8, m_nBufSize * 2) ? "Ok" : "Error");

			for (uint32_t i = 0; i < (m_nBufSize * 2); i++) {
				source8[i] = i & 0xFF;
			}

			memset(destination8, 0x00, m_nBufSize);

			printf("memcpy ");

			gd32_gpio_set(GPIO_EXT_26);

			_memcpy(destination8, source8, m_nBufSize * 2);

			gd32_gpio_clr(GPIO_EXT_26);

			printf("%s\n", compare(source8, destination8, m_nBufSize * 2) ? "Ok" : "Error");

		}
	}
}
