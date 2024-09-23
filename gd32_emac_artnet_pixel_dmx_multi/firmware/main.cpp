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
#include <cassert>

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

#include "artnetnode.h"
#include "artnetparams.h"
#include "artnetmsgconst.h"
#include "artnettriggerhandler.h"

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

namespace artnetnode {
namespace configstore {
uint32_t DMXPORT_OFFSET = 64;
}  // namespace configstore
}  // namespace artnetnode

void Hardware::RebootHandler() {
	WS28xxMulti::Get()->Blackout();
	Dmx::Get()->Blackout();
	ArtNetNode::Get()->Stop();
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

	fw.Print("Art-Net 4 Pixel controller {16x 4 Universes} / 2x DMX");

#if defined (ENABLE_NTP_CLIENT)
	NtpClient ntpClient;
	ntpClient.Start();
	ntpClient.Print();
#endif

	ArtNetNode node;

	ArtNetParams artnetParams;
	artnetParams.Load();
	artnetParams.Set();

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
				node.SetUniverse(nPortProtocolIndex, lightset::PortDir::OUTPUT, static_cast<uint16_t>(nStartUniversePort + u));
				char label[artnet::SHORT_NAME_LENGTH];
				snprintf(label, artnet::SHORT_NAME_LENGTH - 1, "Pixel %c U:%u", 'A' + nOutportIndex, nStartUniversePort + u);
				node.SetShortName(nPortProtocolIndex, label);
			}
			nPortProtocolIndex++;
		}
	}

	const auto nTestPattern = static_cast<pixelpatterns::Pattern>(pixelDmxParams.GetTestPattern());
	PixelTestPattern pixelTestPattern(nTestPattern, nPixelActivePorts);

	// LightSet B - DMX - 2 Universes

	uint32_t nDmxUniverses = 0;

	for (uint32_t nPortIndex = artnetnode::configstore::DMXPORT_OFFSET; nPortIndex < artnetnode::MAX_PORTS; nPortIndex++) {
		const auto nDmxPortIndex = nPortIndex - artnetnode::configstore::DMXPORT_OFFSET;

		if (artnetParams.GetDirection(nDmxPortIndex) == lightset::PortDir::OUTPUT) {
			const auto Universe = artnetParams.GetUniverse(nDmxPortIndex);
			node.SetUniverse(nPortIndex, lightset::PortDir::OUTPUT, Universe);
			nDmxUniverses++;
		}
	}

	Dmx dmx;

	DmxParams dmxparams;
	dmxparams.Load();
	dmxparams.Set(&dmx);

	for (uint32_t nPortIndex = artnetnode::configstore::DMXPORT_OFFSET; nPortIndex < artnetnode::MAX_PORTS; nPortIndex++) {
		const auto nDmxPortIndex = nPortIndex - artnetnode::configstore::DMXPORT_OFFSET;

		if (node.GetPortDirection(nPortIndex) == lightset::PortDir::OUTPUT) {
			dmx.SetPortDirection(nDmxPortIndex, dmx::PortDirection::OUTP, false);
		}
	}

	DmxSend dmxSend;
	dmxSend.Print();

	display.SetDmxInfo(displayudf::dmx::PortDir::OUTPUT, nDmxUniverses);

	// LightSet 64with4

	LightSetWith4<64> lightSet((PixelTestPattern::Get()->GetPattern() != pixelpatterns::Pattern::NONE) ? nullptr : &pixelDmxMulti, (nDmxUniverses != 0) ? &dmxSend : nullptr);
	lightSet.Print();

	ArtNetTriggerHandler triggerHandler(&lightSet, &pixelDmxMulti);

	node.SetOutput(&lightSet);

#if defined (NODE_RDMNET_LLRP_ONLY)
	display.TextStatus(RDMNetConst::MSG_CONFIG, CONSOLE_YELLOW);

	char aDescription[rdm::personality::DESCRIPTION_MAX_LENGTH + 1];
	snprintf(aDescription, sizeof(aDescription) - 1, "Art-Net 4 P:%u-%s:%d D:%u", nPixelActivePorts, pixel::pixel_get_type(pixelDmxConfiguration.GetType()), pixelDmxConfiguration.GetCount(), nDmxUniverses);

	char aLabel[RDM_DEVICE_LABEL_MAX_LENGTH + 1];
	const auto nLength = snprintf(aLabel, sizeof(aLabel) - 1, GD32_BOARD_NAME " Pixel-DMX");

	RDMPersonality *pPersonalities[1] = { new RDMPersonality(aDescription, nullptr) };
	RDMNetDevice llrpOnlyDevice(pPersonalities, 1);

	llrpOnlyDevice.SetLabel(RDM_ROOT_DEVICE, aLabel, static_cast<uint8_t>(nLength));
	llrpOnlyDevice.SetProductCategory(E120_PRODUCT_CATEGORY_FIXTURE);
	llrpOnlyDevice.SetProductDetail(E120_PRODUCT_DETAIL_LED);

	node.SetRdmUID(llrpOnlyDevice.GetUID(), true);

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

	node.Print();

	display.SetTitle("ArtNet 4 Pixel %ux%u", nPixelActivePorts, pixelDmxConfiguration.GetCount());
	display.Set(2, displayudf::Labels::IP);
	display.Set(3, displayudf::Labels::VERSION);
	display.Set(4, displayudf::Labels::UNIVERSE_PORT_A);
	display.Set(5, displayudf::Labels::DMX_DIRECTION);

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

	RemoteConfig remoteConfig(remoteconfig::Node::ARTNET, remoteconfig::Output::PIXEL, node.GetActiveOutputPorts());

	RemoteConfigParams remoteConfigParams;
	remoteConfigParams.Load();
	remoteConfigParams.Set(&remoteConfig);

	while (configStore.Flash())
		;

	mDns.Print();

	display.TextStatus(ArtNetMsgConst::START, CONSOLE_YELLOW);

	node.Start();

	display.TextStatus(ArtNetMsgConst::STARTED, CONSOLE_GREEN);

	hw.WatchdogInit();

	for (;;) {
		hw.WatchdogFeed();
		nw.Run();
		node.Run();
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
