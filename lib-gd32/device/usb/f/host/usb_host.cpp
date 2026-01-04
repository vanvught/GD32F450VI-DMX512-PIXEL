/**
 * @file usb_host.cpp
 *
 */
/* Copyright (C) 2023-2025 by Arjan van Vught mailto:info@gd32-dmx.org
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

#include "gd32.h" // DO NOT REMOVE 
#include "device/usb.h"

extern "C"
{
#include "usbh_core.h"
#include "usbh_msc_core.h"
#include "drv_usbh_int.h"
}

#if !defined(GD32F4XX)
extern usb_core_driver usbh_core;
usbh_host usb_host;
#else
usb_core_driver usbh_core;
usbh_host usb_host_msc;
#endif
extern usbh_user_cb usr_cb;

void usb_init()
{
    UsbRcuConfig();
    UsbGpioConfig();
    UsbVbusConfig();
#if !defined(GD32F4XX)
    usbh_class_register(&usb_host, &usbh_msc);
    usbh_init(&usb_host, &usr_cb);
#else
    usbh_class_register(&usb_host_msc, &usbh_msc);
    usbh_init(&usb_host_msc, &usbh_core, USB_CORE_ENUM_FS, &usr_cb);
#endif

    UsbIntrConfig();
}

extern "C" void USBFS_IRQHandler()
{
    usbh_isr(&usbh_core);
}
