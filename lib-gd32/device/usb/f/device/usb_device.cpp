/**
 * @file usb_device.cpp
 *
 */
/* Copyright (C) 2025 by Arjan van Vught mailto:info@gd32-dmx.org
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

#include "gd32.h"
#include "device/usb.h"
#include "drv_usb_core.h"
extern "C"
{
#include "drv_usbd_int.h"
}

#if defined(CONFIG_USB_DEVICE_CDC)
extern "C"
{
#include "cdc_acm_core.h"
}
#endif

#if defined(CONFIG_USB_DEVICE_CDC)
usb_core_driver cdc_acm;
#endif

#ifndef USE_USB_FS
#error
#endif

#if defined(CONFIG_USB_DEVICE_CDC)
void UsbInit()
{
    UsbRcuConfig();
    UsbGpioConfig();

#if defined(CONFIG_USB_DEVICE_CDC)
    usbd_init(&cdc_acm, USB_CORE_ENUM_FS, &cdc_desc, &cdc_class);
#endif

    UsbIntrConfig();
}

extern usb_core_driver cdc_acm;

extern "C" void USBFS_IRQHandler()
{
    usbd_isr(&cdc_acm);
}
#endif