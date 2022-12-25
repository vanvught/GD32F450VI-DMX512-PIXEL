/**
 * @file main.cpp
 *
 */
/* Copyright (C) 2022 by Arjan van Vught mailto:info@gd32-dmx.org
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
#include "ledblink.h"

#include "mdns.h"
#include "mdnsservices.h"
#if defined (ENABLE_HTTPD)
# include "httpd/httpd.h"
#endif

#include "displayudf.h"
#include "displayudfparams.h"
#include "displayhandler.h"
#include "display_timeout.h"

#include "artnet4node.h"
#include "artnetparams.h"
#include "artnetmsgconst.h"
#include "artnettriggerhandler.h"

#include "pixeldmxconfiguration.h"
#include "pixeltype.h"
#include "pixeltestpattern.h"
#include "pixeldmxparams.h"
#include "pixeldmxstartstop.h"
#include "ws28xxmulti.h"
#include "ws28xxdmxmulti.h"

#include "dmxparams.h"
#include "dmxsend.h"
#include "dmxconfigudp.h"

#include "lightset64with4.h"

#if defined (NODE_RDMNET_LLRP_ONLY)
# include "rdmdeviceparams.h"
# include "rdmnetdevice.h"
# include "rdmnetconst.h"
# include "rdmpersonality.h"
# include "rdm_e120.h"
#endif

#include "remoteconfig.h"
#include "remoteconfigparams.h"

#include "configstore.h"
#include "storeartnet.h"
#include "storedisplayudf.h"
#include "storedmxsend.h"
#include "storenetwork.h"
#if defined (NODE_RDMNET_LLRP_ONLY)
# include "storerdmdevice.h"
#endif
#include "storeremoteconfig.h"
#include "storepixeldmx.h"

#include "firmwareversion.h"
#include "software_version.h"

static constexpr auto DMXPORT_OFFSET = 64U;

void Hardware::RebootHandler() {
	WS28xxMulti::Get()->Blackout();
	Dmx::Get()->Blackout();
	ArtNet4Node::Get()->Stop();
}

void main() {
	Hardware hw;
	Network nw;
	LedBlink lb;
	DisplayUdf display;
	FirmwareVersion fw(SOFTWARE_VERSION, __DATE__, __TIME__);

	ConfigStore configStore;

	fw.Print("\x1b[32m" "Art-Net 4 Pixel controller {16x 4 Universes} / 2x DMX" "\x1b[37m");

	hw.SetLed(hardware::LedStatus::ON);
	lb.SetLedBlinkDisplay(new DisplayHandler);

	display.TextStatus(NetworkConst::MSG_NETWORK_INIT, Display7SegmentMessage::INFO_NETWORK_INIT, CONSOLE_YELLOW);

	StoreNetwork storeNetwork;
	nw.SetNetworkStore(&storeNetwork);
	nw.Init(&storeNetwork);
	nw.Print();

	display.TextStatus(NetworkConst::MSG_MDNS_CONFIG, Display7SegmentMessage::INFO_MDNS_CONFIG, CONSOLE_YELLOW);
	MDNS mDns;
	mDns.Start();
	mDns.AddServiceRecord(nullptr, MDNS_SERVICE_CONFIG, 0x2905);
#if defined (ENABLE_HTTPD)
	mDns.AddServiceRecord(nullptr, MDNS_SERVICE_HTTP, 80, mdns::Protocol::TCP, "node=Art-Net Pixel DMX");
#endif
	mDns.Print();

#if defined (ENABLE_HTTPD)
	HttpDaemon httpDaemon;
	httpDaemon.Start();
#endif

	display.TextStatus(ArtNetMsgConst::PARAMS, Display7SegmentMessage::INFO_NODE_PARMAMS, CONSOLE_YELLOW);

	StoreArtNet storeArtNet(DMXPORT_OFFSET);
	ArtNetParams artnetParams(&storeArtNet);

	ArtNet4Node node;

	if (artnetParams.Load()) {
		artnetParams.Dump();
		artnetParams.Set(DMXPORT_OFFSET);
	}

	// LightSet A - Pixel - 64 Universes

	PixelDmxConfiguration pixelDmxConfiguration;

	StorePixelDmx storePixelDmx;
	PixelDmxParams pixelDmxParams(&storePixelDmx);

	if (pixelDmxParams.Load()) {
		pixelDmxParams.Dump();
		pixelDmxParams.Set(&pixelDmxConfiguration);
	}

	WS28xxDmxMulti pixelDmxMulti(pixelDmxConfiguration);
	pixelDmxMulti.SetPixelDmxHandler(new PixelDmxStartStop);

	const auto nPixelActivePorts = pixelDmxMulti.GetOutputPorts();
	const auto nUniverses = pixelDmxMulti.GetUniverses();

	uint32_t nPortProtocolIndex = 0;

	if (artnetnode::PAGE_SIZE==4) {
		for (uint32_t nOutportIndex = 0; nOutportIndex < nPixelActivePorts; nOutportIndex++) {
			auto isSet = false;
			const auto nStartUniversePort = pixelDmxParams.GetStartUniversePort(nOutportIndex, isSet);
			if (isSet) {
				for (uint16_t u = 0; u < nUniverses; u++) {
					node.SetUniverse(nPortProtocolIndex, lightset::PortDir::OUTPUT, static_cast<uint16_t>(nStartUniversePort + u));
					nPortProtocolIndex++;
				}
				nPortProtocolIndex = nPortProtocolIndex + artnet::PORTS - nUniverses;
			} else {
				nPortProtocolIndex = nPortProtocolIndex + artnet::PORTS;
			}
		}
	} else {
		assert(artnetnode::PAGE_SIZE==1);

		for (uint32_t nOutportIndex = 0; nOutportIndex < nPixelActivePorts; nOutportIndex++) {
			auto isSet = false;
			const auto nStartUniversePort = pixelDmxParams.GetStartUniversePort(nOutportIndex, isSet);
			for (uint32_t u = 0; u < nUniverses; u++) {
				if (isSet) {
					node.SetUniverse(nPortProtocolIndex, lightset::PortDir::OUTPUT, static_cast<uint16_t>(nStartUniversePort + u));
				}
				nPortProtocolIndex++;
			}
		}
	}

	const auto nTestPattern = static_cast<pixelpatterns::Pattern>(pixelDmxParams.GetTestPattern());
	PixelTestPattern pixelTestPattern(nTestPattern, nPixelActivePorts);

	// LightSet B - DMX - 2 Universes

	const auto nAddress = static_cast<uint16_t>((artnetParams.GetNet() & 0x7F) << 8) | static_cast<uint16_t>((artnetParams.GetSubnet() & 0x0F) << 4);
	auto bIsSet = false;
	auto nDmxUniverses = 0U;

	auto nUniverse = artnetParams.GetUniverse(0, bIsSet);
	auto direction = artnetParams.GetDirection(0);

	if (direction == lightset::PortDir::OUTPUT) {
		node.SetUniverse(DMXPORT_OFFSET, lightset::PortDir::OUTPUT, static_cast<uint16_t>(nAddress | nUniverse));
		nDmxUniverses++;
	}

	nUniverse = artnetParams.GetUniverse(1, bIsSet);
	direction = artnetParams.GetDirection(1);

	if (direction == lightset::PortDir::OUTPUT) {
		node.SetUniverse(DMXPORT_OFFSET + 1U, lightset::PortDir::OUTPUT, static_cast<uint16_t>(nAddress | nUniverse));
		nDmxUniverses++;
	}

	StoreDmxSend storeDmxSend;
	DmxParams dmxparams(&storeDmxSend);

	Dmx dmx;

	if (dmxparams.Load()) {
		dmxparams.Dump();
		dmxparams.Set(&dmx);
	}

	DmxSend dmxSend;
	
	dmxSend.Print();

	DmxConfigUdp *pDmxConfigUdp = nullptr;

	if (nDmxUniverses != 0) {
		pDmxConfigUdp = new DmxConfigUdp;
		assert(pDmxConfigUdp != nullptr);
	}

	display.SetDmxInfo(displayudf::dmx::PortDir::OUTPUT, nDmxUniverses);

	// Art-Net

	node.SetArtNetStore(&storeArtNet);

	// LightSet 64with4

	LightSet64with4 lightSet((PixelTestPattern::GetPattern() != pixelpatterns::Pattern::NONE) ? nullptr : &pixelDmxMulti, (nDmxUniverses != 0) ? &dmxSend : nullptr);
	lightSet.Print();

	ArtNetTriggerHandler triggerHandler(&lightSet, &pixelDmxMulti);

	node.SetOutput(&lightSet);
	node.Print();

#if defined (NODE_RDMNET_LLRP_ONLY)
	display.TextStatus(RDMNetConst::MSG_CONFIG, Display7SegmentMessage::INFO_RDMNET_CONFIG, CONSOLE_YELLOW);

	char aDescription[rdm::personality::DESCRIPTION_MAX_LENGTH + 1];
	snprintf(aDescription, sizeof(aDescription) - 1, "Art-Net 4 P:%u-%s:%d D:%u", nPixelActivePorts, PixelType::GetType(WS28xxMulti::Get()->GetType()), WS28xxMulti::Get()->GetCount(), nDmxUniverses);

	char aLabel[RDM_DEVICE_LABEL_MAX_LENGTH + 1];
	const auto nLength = snprintf(aLabel, sizeof(aLabel) - 1, GD32_BOARD_NAME " Pixel-DMX");

	RDMPersonality *pPersonalities[1] = { new RDMPersonality(aDescription, nullptr) };
	RDMNetDevice llrpOnlyDevice(pPersonalities, 1);

	llrpOnlyDevice.SetLabel(RDM_ROOT_DEVICE, aLabel, static_cast<uint8_t>(nLength));
	llrpOnlyDevice.SetProductCategory(E120_PRODUCT_CATEGORY_FIXTURE);
	llrpOnlyDevice.SetProductDetail(E120_PRODUCT_DETAIL_ETHERNET_NODE);

	node.SetRdmUID(llrpOnlyDevice.GetUID(), true);

	llrpOnlyDevice.Init();

	StoreRDMDevice storeRdmDevice;
	RDMDeviceParams rdmDeviceParams(&storeRdmDevice);

	if (rdmDeviceParams.Load()) {
		rdmDeviceParams.Dump();
		rdmDeviceParams.Set(&llrpOnlyDevice);
	}

	llrpOnlyDevice.SetRDMDeviceStore(&storeRdmDevice);
	llrpOnlyDevice.Print();
#endif

	display.SetTitle("ArtNet 4 Pixel %ux%u", nPixelActivePorts, WS28xxMulti::Get()->GetCount());
	display.Set(2, displayudf::Labels::IP);
	display.Set(3, displayudf::Labels::NODE_NAME);
	display.Set(4, displayudf::Labels::VERSION);
	display.Set(5, displayudf::Labels::UNIVERSE_PORT_A);
	display.Set(6, displayudf::Labels::DMX_DIRECTION);
	display.Printf(7, "%s:%d G%d %s",
		PixelType::GetType(pixelDmxConfiguration.GetType()),
		pixelDmxConfiguration.GetCount(),
		pixelDmxConfiguration.GetGroupingCount(),
		PixelType::GetMap(pixelDmxConfiguration.GetMap()));

	StoreDisplayUdf storeDisplayUdf;
	DisplayUdfParams displayUdfParams(&storeDisplayUdf);

	if (displayUdfParams.Load()) {
		displayUdfParams.Set(&display);
		displayUdfParams.Dump();
	}

	display.Show(&node);

	if (nTestPattern != pixelpatterns::Pattern::NONE) {
		display.ClearLine(6);
		display.Printf(6, "%s:%u", PixelPatterns::GetName(nTestPattern), static_cast<uint32_t>(nTestPattern));
	}

	RemoteConfig remoteConfig(remoteconfig::Node::ARTNET, remoteconfig::Output::PIXEL, node.GetActiveOutputPorts());

	StoreRemoteConfig storeRemoteConfig;
	RemoteConfigParams remoteConfigParams(&storeRemoteConfig);

	if(remoteConfigParams.Load()) {
		remoteConfigParams.Dump();
		remoteConfigParams.Set(&remoteConfig);
	}

	while (configStore.Flash())
		;

#if defined (NODE_RDMNET_LLRP_ONLY)
	display.TextStatus(RDMNetConst::MSG_START, Display7SegmentMessage::INFO_RDMNET_START, CONSOLE_YELLOW);

	llrpOnlyDevice.Start();

	display.TextStatus(RDMNetConst::MSG_STARTED, Display7SegmentMessage::INFO_RDMNET_STARTED, CONSOLE_GREEN);
#endif

	display.TextStatus(ArtNetMsgConst::START, Display7SegmentMessage::INFO_NODE_START, CONSOLE_YELLOW);

	node.Start();

	display.TextStatus(ArtNetMsgConst::STARTED, Display7SegmentMessage::INFO_NODE_STARTED, CONSOLE_GREEN);

	hw.WatchdogInit();

	for (;;) {
		hw.WatchdogFeed();
		nw.Run();
		node.Run();
		remoteConfig.Run();
		configStore.Flash();
		if (__builtin_expect((PixelTestPattern::GetPattern() != pixelpatterns::Pattern::NONE), 0)) {
			pixelTestPattern.Run();
		}
		if (pDmxConfigUdp != nullptr) {
			pDmxConfigUdp->Run();
		}
		mDns.Run();
#if defined (NODE_RDMNET_LLRP_ONLY)
		llrpOnlyDevice.Run();
#endif
#if defined (ENABLE_HTTPD)
		httpDaemon.Run();
#endif
		display.Run();
		lb.Run();
	}
}
