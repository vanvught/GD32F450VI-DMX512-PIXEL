/**
 * @file usbh_msc_fatfs.cpp
 *
 */
/* Copyright (C) 2026 by Arjan van Vught mailto:info@gd32-dmx.org
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

#include <time.h>
 
#include "usb_conf.h" // IWYU pragma: keep
extern "C"
{
#include "usbh_msc_core.h"
}
#include "ff.h"
#include "diskio.h"

static volatile DSTATUS state = STA_NOINIT;

extern usbh_host usb_host;

extern "C"
{
    DSTATUS disk_initialize(BYTE drv)
    {
        usb_core_driver* udev = (usb_core_driver*)usb_host.data;

        if (udev->host.connect_status)
        {
            state &= ~STA_NOINIT;
        }

        return state;
    }

    DSTATUS disk_status(BYTE drv)
    {
        if (drv)
        {
            return STA_NOINIT; /* supports only single drive */
        }

        return state;
    }

    DRESULT disk_read(BYTE drv, BYTE* buff, DWORD sector, UINT count)
    {
        BYTE status = USBH_OK;
        usb_core_driver* udev = (usb_core_driver*)usb_host.data;

        if (drv || (!count))
        {
            return RES_PARERR;
        }

        if (state & STA_NOINIT)
        {
            return RES_NOTRDY;
        }

        if (udev->host.connect_status)
        {
            do
            {
                status = usbh_msc_read(&usb_host, drv, sector, buff, count);

                if (!udev->host.connect_status)
                {
                    return RES_ERROR;
                }
            } while (status == USBH_BUSY);
        }

        if (status == USBH_OK)
        {
            return RES_OK;
        }

        return RES_ERROR;
    }

#ifdef CONFIG_FS_ENABLE_WRITE
    DRESULT disk_write(BYTE drv, const BYTE* buff, DWORD sector, UINT count)
    {
        BYTE status = USBH_OK;
        usb_core_driver* udev = (usb_core_driver*)usb_host.data;

        if ((!count) || drv)
        {
            return RES_PARERR;
        }

        if (state & STA_NOINIT)
        {
            return RES_NOTRDY;
        }

        if (state & STA_PROTECT)
        {
            return RES_WRPRT;
        }

        if (udev->host.connect_status)
        {
            do
            {
                status = usbh_msc_write(&usb_host, drv, sector, reinterpret_cast<uint8_t*>(const_cast<BYTE*>(buff)), count);

                if (!udev->host.connect_status)
                {
                    return RES_ERROR;
                }
            } while (status == USBH_BUSY);
        }

        if (status == USBH_OK)
        {
            return RES_OK;
        }

        return RES_ERROR;
    }

#endif /* CONFIG_FS_ENABLE_WRITE */

    DRESULT disk_ioctl(BYTE drv, BYTE ctrl, void* buff)
    {
        DRESULT res = RES_OK;
        msc_lun info;

        if (drv)
        {
            return RES_PARERR;
        }

        res = RES_ERROR;

        if (state & STA_NOINIT)
        {
            return RES_NOTRDY;
        }

        switch (ctrl)
        {
            // make sure that no pending write process 
            case CTRL_SYNC:
                res = RES_OK;
                break;

            // get number of sectors on the disk (dword)
            case GET_SECTOR_COUNT:
                if (USBH_OK == usbh_msc_lun_info_get(&usb_host, drv, &info))
                {
                    *reinterpret_cast<DWORD*>(buff) = static_cast<DWORD>(info.capacity.block_nbr);
                    res = RES_OK;
                }
                break;

            // get r/w sector size (word) */
            case GET_SECTOR_SIZE:
                if (USBH_OK == usbh_msc_lun_info_get(&usb_host, drv, &info))
                {
                    *reinterpret_cast<WORD*>(buff) = static_cast<DWORD>(info.capacity.block_size);
                    res = RES_OK;
                }
                break;

            // get erase block size in unit of sector (dword)
            case GET_BLOCK_SIZE:
                *static_cast<DWORD*>(buff) = 512U;
                break;

            default:
                res = RES_PARERR;
                break;
        }

        return res;
    }

    DWORD get_fattime(void)
    {
      auto ltime = time(nullptr);
      auto *local_time = localtime(&ltime);
      auto packed_time = ((DWORD) (local_time->tm_year + 20) << 25)
          | ((DWORD) (local_time->tm_mon + 1) << 21)
          | ((DWORD) local_time->tm_mday << 16)
          | ((DWORD) local_time->tm_hour << 11)
          | ((DWORD) local_time->tm_min << 5)
          | ((DWORD) local_time->tm_sec >> 1);

      return packed_time;
    }
}
