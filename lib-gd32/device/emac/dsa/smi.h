/**
 * @file smi.h
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
 * https://github.com/torvalds/linux/blob/master/drivers/net/dsa/mv88e6xxx/smi.h
 */
/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Marvell 88E6xxx System Management Interface (SMI) support
 *
 * Copyright (c) 2008 Marvell Semiconductor
 *
 * Copyright (c) 2019 Vivien Didelot <vivien.didelot@gmail.com>
 */

#ifndef SMI_H_
#define SMI_H_

#include <cstdint>

#include "gd32.h"

#include "debug.h"

/* Offset 0x00: SMI Command Register */
#define MV88E6XXX_SMI_CMD					0x00
#define MV88E6XXX_SMI_CMD_BUSY				0x8000
#define MV88E6XXX_SMI_CMD_MODE_MASK			0x1000
#define MV88E6XXX_SMI_CMD_MODE_45			0x0000
#define MV88E6XXX_SMI_CMD_MODE_22			0x1000
#define MV88E6XXX_SMI_CMD_OP_MASK			0x0c00
#define MV88E6XXX_SMI_CMD_OP_22_WRITE		0x0400
#define MV88E6XXX_SMI_CMD_OP_22_READ		0x0800
#define MV88E6XXX_SMI_CMD_OP_45_WRITE_ADDR	0x0000
#define MV88E6XXX_SMI_CMD_OP_45_WRITE_DATA	0x0400
#define MV88E6XXX_SMI_CMD_OP_45_READ_DATA	0x0800
#define MV88E6XXX_SMI_CMD_OP_45_READ_DATA_INC	0x0c00
#define MV88E6XXX_SMI_CMD_DEV_ADDR_MASK		0x003e
#define MV88E6XXX_SMI_CMD_REG_ADDR_MASK		0x001f

/* Offset 0x01: SMI Data Register */
#define MV88E6XXX_SMI_DATA					0x01

inline int mv88e6xxx_smi_direct_read(uint32_t nPhyAddress, uint32_t nPhyRegister, uint16_t& nData) {
	DEBUG_ENTRY
	DEBUG_PRINTF("nPhyAddress=%u, nPhyRegister=0x%.4x", nPhyAddress, nPhyRegister);

	if (ERROR == enet_phy_write_read(ENET_PHY_READ, nPhyAddress, nPhyRegister, &nData)) {
		DEBUG_EXIT
		return -1;
	}

	DEBUG_PRINTF("pData=0x%.4x", nData);
	DEBUG_EXIT
	return 0;
}

inline int mv88e6xxx_smi_direct_write(uint32_t nPhyAddress, uint32_t nPhyRegister, uint16_t nData) {
	DEBUG_ENTRY
	DEBUG_PRINTF("nPhyAddress=%u, nPhyRegister=0x%.4x, nData=0x%.4x", nPhyAddress, nPhyRegister, nData);

	if (ERROR == enet_phy_write_read(ENET_PHY_WRITE, nPhyAddress, nPhyRegister, &nData)) {
		DEBUG_EXIT
		return -1;
	}

	DEBUG_EXIT
	return 0;
}

int mv88e6xxx_smi_init();
int mv88e6xxx_smi_read(const uint32_t nDeviceAddress, uint32_t nDeviceRegister, uint16_t& nData);
int mv88e6xxx_smi_write(const uint32_t nDeviceAddress, const uint32_t nDeviceRegister, const uint16_t nData);

#endif /* SMI_H_ */
