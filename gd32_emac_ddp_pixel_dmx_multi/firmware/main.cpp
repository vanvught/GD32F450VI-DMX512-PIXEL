/**
 * @file main.cpp
 */
/* Copyright (C) 2022-2026 by Arjan van Vught mailto:info@gd32-dmx.org
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
#pragma GCC optimize("O2")
#pragma GCC optimize("no-tree-loop-distribute-patterns")

#include "board.h"
#include "watchdog.h"
#include "network.h"
#include "apps/mdns.h"
#include "displayudf.h"
#include "json/displayudfparams.h"
#include "ddpdisplay.h"
#include "firmware/pixeldmx/show.h"
#include "pixeltestpattern.h"
#include "json/pixeldmxparams.h"
#include "pixeldmxmulti.h"
#include "json/dmxsendparams.h"
#include "dmxsend.h"
#include "dmxnodewith4.h"
#include "remoteconfig.h"
#include "configstore.h"
#include "firmware/firmwareversion.h"
#include "software_version.h"

namespace board {
void RebootHandler() {
    PixelDmxMulti::Get().Blackout();
    DdpDisplay::Get()->Stop();
}
} // namespace board

int main() // NOLINT
{
    board::Init();
    DisplayUdf display;
    ConfigStore config_store;
    network::Init();
    FirmwareVersion fw(kSoftwareVersion, __DATE__, __TIME__);

    fw.Print("DDP Pixel controller {16x 4 Universes} / 2x DMX");

    network::apps::mdns::ServiceRecordAdd(nullptr, network::apps::mdns::Services::kDdp, "type=display");

    DdpDisplay ddpdisplay;

    // LightSet A - Pixel - 64 Universes
    PixelDmxMulti pixeldmx_multi;
    PixelTestPattern pixeltest_pattern(pixelpatterns::Pattern::kNone, 16);

    json::PixelDmxParams pixeldmx_params;
    pixeldmx_params.Load();
    pixeldmx_params.Set();

    const auto kActivePorts = pixeldmx_multi.GetOutputPorts();

    ddpdisplay.SetCount(pixeldmx_multi.GetGroups(), pixeldmx_multi.GetLedsPerPixel(), kActivePorts);

    const auto kTestPattern = pixeltest_pattern.GetPattern();

    // LightSet B - DMX - 2 Universes
    Dmx dmx;

    json::DmxSendParams dmxparams;
    dmxparams.Load();
    dmxparams.Set();

    DmxSend dmx_send;
    dmx_send.Print();

    // DmxNodeWith4

    DmxNodeWith4<CONFIG_DMXNODE_DMX_PORT_OFFSET> dmx_node((kTestPattern != pixelpatterns::Pattern::kNone) ? nullptr : &pixeldmx_multi, &dmx_send);
    dmx_node.Print();

    ddpdisplay.SetOutput(&dmx_node);
    ddpdisplay.Print();

    display.SetTitle("DDP Pixel %ux%u", kActivePorts, pixeldmx_multi.GetCount());
    display.Set(2, displayudf::Labels::kVersion);
    display.Set(3, displayudf::Labels::kHostname);
    display.Set(4, displayudf::Labels::kIp);
    display.Set(5, displayudf::Labels::kDefaultGateway);

    json::DisplayUdfParams displayudf_params;
    displayudf_params.Load();
    displayudf_params.SetAndShow();

    common::firmware::pixeldmx::Show(7, kTestPattern);

    RemoteConfig remote_config(remoteconfig::Output::PIXEL, kActivePorts);

    display.TextStatus("Starting DDP Display", ansi::Colours::Colour::kYellow);

    ddpdisplay.Start();

    display.TextStatus("DDP Display Started", ansi::Colours::Colour::kGreen);

    watchdog::Init();

    for (;;) {
        watchdog::Feed();
        network::Run();
        pixeltest_pattern.Run();
        board::Run();
    }
}
