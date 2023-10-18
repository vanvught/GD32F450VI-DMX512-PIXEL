/**
 * @file smi.cpp
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
/**
 * https://github.com/torvalds/linux/blob/master/drivers/net/dsa/mv88e6xxx/smi.c
 */
// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Marvell 88E6xxx System Management Interface (SMI) support
 *
 * Copyright (c) 2008 Marvell Semiconductor
 *
 * Copyright (c) 2019 Vivien Didelot <vivien.didelot@gmail.com>
 */

#include <cstdint>

#include "smi.h"
#include "chip.h"

#include "gd32.h"

#include "debug.h"

static int mv88e6xxx_smi_direct_wait(int dev, int reg, int bit, int val) {
	DEBUG_ENTRY

	uint16_t data;
	int i;

	for (i = 0;  i < 2; i++) {
		if (mv88e6xxx_smi_direct_read(dev, reg, data)) {
			DEBUG_EXIT
			return -1;
		}

		if (!!(data & BIT(bit)) == !!val) {
			DEBUG_EXIT
			return 0;
		}

		udelay(1000); //TODO ?
	}

	DEBUG_EXIT
	return -1;
}



static int mv88e6xxx_smi_indirect_init() {
	return mv88e6xxx_smi_direct_wait(MV88E6XXX_PHY_ADDRESS, MV88E6XXX_SMI_CMD, 15, 0);
}

static int mv88e6xxx_smi_indirect_read(const uint32_t nDeviceAddress, const uint32_t RegisterAddress, uint16_t& nData) {
	DEBUG_ENTRY
	DEBUG_PRINTF("nDeviceAddress=0x%.4x RegisterAddress=0x%.4x", nDeviceAddress, RegisterAddress);

	int err = mv88e6xxx_smi_direct_write(MV88E6XXX_PHY_ADDRESS,
					 MV88E6XXX_SMI_CMD,
					 MV88E6XXX_SMI_CMD_BUSY |
					 MV88E6XXX_SMI_CMD_MODE_22 |
					 MV88E6XXX_SMI_CMD_OP_22_READ |
					 (nDeviceAddress << 5) | RegisterAddress);
	if (err) {
		DEBUG_EXIT
		return err;
	}

	if (mv88e6xxx_smi_direct_wait(MV88E6XXX_PHY_ADDRESS, MV88E6XXX_SMI_CMD, 15, 0)) {
		DEBUG_EXIT
		return err;
	}

	DEBUG_EXIT
	return mv88e6xxx_smi_direct_read(MV88E6XXX_PHY_ADDRESS, MV88E6XXX_SMI_DATA, nData);
}

static int mv88e6xxx_smi_indirect_write(const uint32_t nDeviceAddress, const uint32_t nRegisterAddress, uint16_t nData) {
	DEBUG_ENTRY
	DEBUG_PRINTF("dev=0x%.4x reg=0x%.4x data=0x%.4x", nDeviceAddress, nRegisterAddress, nData);

	int err;

	if (mv88e6xxx_smi_direct_write(MV88E6XXX_PHY_ADDRESS, MV88E6XXX_SMI_DATA, nData)) {
		DEBUG_EXIT
		return -1;
	}

	err = mv88e6xxx_smi_direct_write(MV88E6XXX_PHY_ADDRESS,
					 MV88E6XXX_SMI_CMD,
					 MV88E6XXX_SMI_CMD_BUSY |
					 MV88E6XXX_SMI_CMD_MODE_22 |
					 MV88E6XXX_SMI_CMD_OP_22_WRITE |
					 (nDeviceAddress << 5) | nRegisterAddress);
	if (err) {
		DEBUG_EXIT
		return err;
	}

	DEBUG_EXIT
	return mv88e6xxx_smi_direct_wait(MV88E6XXX_PHY_ADDRESS, MV88E6XXX_SMI_CMD, 15, 0);
}

/*
 * Public interface
 */

int mv88e6xxx_smi_read(const uint32_t nDeviceAddress, const uint32_t nDeviceRegister, uint16_t& nData) {
	DEBUG_PRINTF("nDeviceAddress=0x%.4x nDeviceRegister=0x%.4x", nDeviceAddress, nDeviceRegister);
	return mv88e6xxx_smi_indirect_read(nDeviceAddress, nDeviceRegister, nData);

}

int mv88e6xxx_smi_write(const uint32_t nDeviceAddress, const uint32_t nDeviceRegister, const uint16_t nData) {
	DEBUG_PRINTF("nDeviceAddress=0x%.4x nDeviceRegister=0x%.4x nData=0x%.4x", nDeviceAddress, nDeviceRegister, nData);
	return mv88e6xxx_smi_indirect_write(nDeviceAddress, nDeviceRegister, nData);
}

int mv88e6xxx_smi_init() {
	DEBUG_PRINTF("phy_addr=0x%.4x", MV88E6XXX_PHY_ADDRESS);
	return mv88e6xxx_smi_indirect_init();
}
