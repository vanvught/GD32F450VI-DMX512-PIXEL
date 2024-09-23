/**
 * @file main.cpp
 *
 */
/* Copyright (C) 2022-2024 by Arjan van Vught mailto:info@gd32-dmx.org
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

#include <cstdint>

#include "hardware.h"
#include "network.h"
#include "networkconst.h"

#include "net/apps/mdns.h"

#if defined (ENABLE_NTP_CLIENT)
# include "net/apps/ntpclient.h"
#endif

#include "displayudf.h"
#include "displayudfparams.h"
#include "displayhandler.h"

#include "e131.h"
#include "e131bridge.h"
#include "e131params.h"
#include "e131msgconst.h"

#include "pixeldmxconfiguration.h"
#include "pixeltype.h"
#include "pixeltestpattern.h"
#include "pixeldmxparams.h"

#include "ws28xxmulti.h"
#include "ws28xxdmxmulti.h"

#include "dmxparams.h"
#include "dmxsend.h"
#include "dmxconfigudp.h"

#include "lightsetwith4.h"

#if defined (NODE_RDMNET_LLRP_ONLY)
# include "rdmdeviceparams.h"
# include "rdmnetdevice.h"
# include "rdmnetconst.h"
# include "rdmpersonality.h"
# include "rdm_e120.h"
#endif

#if defined (NODE_SHOWFILE)
# include "showfile.h"
# include "showfileparams.h"
#endif

#include "remoteconfig.h"
#include "remoteconfigparams.h"

#include "configstore.h"

#include "firmwareversion.h"
#include "software_version.h"

namespace e131bridge {
namespace configstore {
uint32_t DMXPORT_OFFSET = 64;
}  // namespace configstore
}  // namespace e131bridge

void Hardware::RebootHandler() {
	WS28xxMulti::Get()->Blackout();
	Dmx::Get()->Blackout();
	E131Bridge::Get()->Stop();
}

int main() {
	Hardware hw;
	DisplayUdf display;
	ConfigStore configStore;
	display.TextStatus(NetworkConst::MSG_NETWORK_INIT, CONSOLE_YELLOW);
	Network nw;
	MDNS mDns;
	display.TextStatus(NetworkConst::MSG_NETWORK_STARTED, CONSOLE_GREEN);
	FirmwareVersion fw(SOFTWARE_VERSION, __DATE__, __TIME__);

	fw.Print("sACN E1.31 Pixel controller {8x 4 Universes} / 2x DMX");
	
#if defined (ENABLE_NTP_CLIENT)
	NtpClient ntpClient;
	ntpClient.Start();
	ntpClient.Print();
#endif

	E131Bridge bridge;

	E131Params e131params;
	e131params.Load();
	e131params.Set();

	// LightSet A - Pixel - 64 Universes

	PixelDmxConfiguration pixelDmxConfiguration;

	PixelDmxParams pixelDmxParams;
	pixelDmxParams.Load();
	pixelDmxParams.Set();

	WS28xxDmxMulti pixelDmxMulti;

	const auto nPixelActivePorts = pixelDmxConfiguration.GetOutputPorts();
	const auto nUniverses = pixelDmxConfiguration.GetUniverses();

	uint32_t nPortProtocolIndex = 0;

	for (uint32_t nOutportIndex = 0; nOutportIndex < nPixelActivePorts; nOutportIndex++) {
		auto isSet = false;
		const auto nStartUniversePort = pixelDmxParams.GetStartUniversePort(nOutportIndex, isSet);
		for (uint32_t u = 0; u < nUniverses; u++) {
			if (isSet) {
				bridge.SetUniverse(nPortProtocolIndex, lightset::PortDir::OUTPUT, static_cast<uint16_t>(nStartUniversePort + u));
			}
			nPortProtocolIndex++;
		}
	}

	const auto nTestPattern = static_cast<pixelpatterns::Pattern>(pixelDmxParams.GetTestPattern());
	PixelTestPattern pixelTestPattern(nTestPattern, nPixelActivePorts);

	// LightSet B - DMX - 2 Universes

	bool bIsSet;
	uint32_t nDmxUniverses = 0;

	auto nUniverse = e131params.GetUniverse(0, bIsSet);
	auto direction = e131params.GetDirection(0);

	if (direction == lightset::PortDir::OUTPUT) {
		bridge.SetUniverse(e131bridge::configstore::DMXPORT_OFFSET, lightset::PortDir::OUTPUT, nUniverse);
		nDmxUniverses++;
	}

	nUniverse = e131params.GetUniverse(1, bIsSet);
	direction = e131params.GetDirection(1);

	if (direction == lightset::PortDir::OUTPUT) {
		bridge.SetUniverse(e131bridge::configstore::DMXPORT_OFFSET + 1U, lightset::PortDir::OUTPUT, nUniverse);
		nDmxUniverses++;
	}

	Dmx dmx;

	DmxParams dmxparams;
	dmxparams.Load();
	dmxparams.Set(&dmx);

	for (uint32_t nPortIndex = e131bridge::configstore::DMXPORT_OFFSET; nPortIndex < e131bridge::MAX_PORTS; nPortIndex++) {
		uint16_t nUniverse;
		const auto nDmxPortIndex = nPortIndex - e131bridge::configstore::DMXPORT_OFFSET;

		if (bridge.GetUniverse(nPortIndex, nUniverse, lightset::PortDir::OUTPUT)) {
			dmx.SetPortDirection(nDmxPortIndex, dmx::PortDirection::OUTP, false);
		} else {
			dmx.SetPortDirection(nDmxPortIndex, dmx::PortDirection::INP, false);
		}
	}

	DmxSend dmxSend;

	display.SetDmxInfo(displayudf::dmx::PortDir::OUTPUT, nDmxUniverses);

	// LightSet 64with4

	LightSetWith4<64> lightSet((PixelTestPattern::Get()->GetPattern() != pixelpatterns::Pattern::NONE) ? nullptr : &pixelDmxMulti, (nDmxUniverses != 0) ? &dmxSend : nullptr);
	lightSet.Print();

	bridge.SetOutput(&lightSet);

#if defined (NODE_RDMNET_LLRP_ONLY)
	display.TextStatus(RDMNetConst::MSG_CONFIG, CONSOLE_YELLOW);

	char aDescription[rdm::personality::DESCRIPTION_MAX_LENGTH + 1];
	snprintf(aDescription, sizeof(aDescription) - 1, "sACN Pixel %u-%s:%d DMX %u", nPixelActivePorts, pixel::pixel_get_type(pixelDmxConfiguration.GetType()), pixelDmxConfiguration.GetCount(), nDmxUniverses);

	char aLabel[RDM_DEVICE_LABEL_MAX_LENGTH + 1];
	const auto nLength = snprintf(aLabel, sizeof(aLabel) - 1, GD32_BOARD_NAME " Pixel-DMX");

	RDMPersonality *pPersonalities[1] = { new RDMPersonality(aDescription, nullptr) };
	RDMNetDevice llrpOnlyDevice(pPersonalities, 1);

	llrpOnlyDevice.SetLabel(RDM_ROOT_DEVICE, aLabel, static_cast<uint8_t>(nLength));
	llrpOnlyDevice.SetProductCategory(E120_PRODUCT_CATEGORY_FIXTURE);
	llrpOnlyDevice.SetProductDetail(E120_PRODUCT_DETAIL_LED);
	llrpOnlyDevice.Init();

	RDMDeviceParams rdmDeviceParams;

	rdmDeviceParams.Load();
	rdmDeviceParams.Set(&llrpOnlyDevice);
	
	llrpOnlyDevice.Print();
#endif

#if defined (NODE_SHOWFILE)
	ShowFile showFile;

	ShowFileParams showFileParams;
	showFileParams.Load();
	showFileParams.Set();

	showFile.Print();
#endif

	bridge.Print();

	display.SetTitle("sACN Pixel %ux%u", nPixelActivePorts, pixelDmxConfiguration.GetCount());
	display.Set(2, displayudf::Labels::VERSION);
	display.Set(3, displayudf::Labels::HOSTNAME);
	display.Set(4, displayudf::Labels::IP);
	display.Set(5, displayudf::Labels::DEFAULT_GATEWAY);
	display.Set(6, displayudf::Labels::DMX_DIRECTION);

	DisplayUdfParams displayUdfParams;

	displayUdfParams.Load();
	displayUdfParams.Set(&display);

	display.Show();
	display.Printf(7, "%s:%d G%d %s",
		pixel::pixel_get_type(pixelDmxConfiguration.GetType()),
		pixelDmxConfiguration.GetCount(),
		pixelDmxConfiguration.GetGroupingCount(),
		pixel::pixel_get_map(pixelDmxConfiguration.GetMap()));

	if (nTestPattern != pixelpatterns::Pattern::NONE) {
		display.ClearLine(6);
		display.Printf(6, "%s:%u", PixelPatterns::GetName(nTestPattern), static_cast<uint32_t>(nTestPattern));
	}

	RemoteConfig remoteConfig(remoteconfig::Node::E131, remoteconfig::Output::PIXEL, bridge.GetActiveOutputPorts());

	RemoteConfigParams remoteConfigParams;
	remoteConfigParams.Load();
	remoteConfigParams.Set(&remoteConfig);

	while (configStore.Flash())
		;

	mDns.Print();

	display.TextStatus(E131MsgConst::START, CONSOLE_YELLOW);

	bridge.Start();

	display.TextStatus(E131MsgConst::STARTED, CONSOLE_GREEN);

	hw.WatchdogInit();

	for (;;) {
		hw.WatchdogFeed();
		nw.Run();
		bridge.Run();
#if defined (NODE_SHOWFILE)
		showFile.Run();
#endif
		remoteConfig.Run();
		configStore.Flash();
		pixelTestPattern.Run();
		mDns.Run();
#if defined (ENABLE_NTP_CLIENT)
		ntpClient.Run();
#endif
#if defined (NODE_RDMNET_LLRP_ONLY)
		llrpOnlyDevice.Run();
#endif
		display.Run();
		hw.Run();
	}
}
