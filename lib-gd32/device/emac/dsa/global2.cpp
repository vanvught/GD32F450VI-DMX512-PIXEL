/**
 * @file global2.cpp
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
 * https://github.com/torvalds/linux/blob/master/drivers/net/dsa/mv88e6xxx/global2.c
 */
// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Marvell 88E6xxx Switch Global 2 Registers support
 *
 * Copyright (c) 2008 Marvell Semiconductor
 *
 * Copyright (c) 2016-2017 Savoir-faire Linux Inc.
 *	Vivien Didelot <vivien.didelot@savoirfairelinux.com>
 */

#include <cstdint>

#include "global2.h"
#include "chip.h"

#include "debug.h"

#define __bf_shf(x) (__builtin_ffsll(x) - 1)

static int mv88e6xxx_g2_read(const uint32_t nDeviceRegister, uint16_t&  nValue) {
	return mv88e6xxx_read(MV88E6XXX_GLOBAL2_ADDRESS, nDeviceRegister, nValue);
}

static int mv88e6xxx_g2_write(const uint32_t nDeviceRegister, uint16_t  nValue) {
	return mv88e6xxx_write(MV88E6XXX_GLOBAL2_ADDRESS, nDeviceRegister, nValue);
}

static int mv88e6xxx_g2_wait_bit(uint32_t reg, uint32_t bit, uint16_t val) {
	return mv88e6xxx_wait_bit(MV88E6XXX_GLOBAL2_ADDRESS, reg, bit, val);
}

static int mv88e6xxx_g2_smi_phy_wait() {
	const uint32_t bit = __bf_shf(MV88E6XXX_G2_SMI_PHY_CMD_BUSY);
	return mv88e6xxx_g2_wait_bit(MV88E6XXX_G2_SMI_PHY_CMD, bit, 0);
}

static int mv88e6xxx_g2_smi_phy_cmd(const uint16_t nCommand) {
	DEBUG_ENTRY
	DEBUG_PRINTF("nCommand=0x%.4x", nCommand);

	auto err = mv88e6xxx_g2_write(MV88E6XXX_G2_SMI_PHY_CMD, MV88E6XXX_G2_SMI_PHY_CMD_BUSY | nCommand);

	if (err) {
		DEBUG_EXIT
		return err;
	}

	const auto nResult = mv88e6xxx_g2_smi_phy_wait();
	DEBUG_EXIT
	return nResult;
}

static int mv88e6xxx_g2_smi_phy_access(const bool c45, const uint16_t op, uint32_t dev, const uint32_t reg) {
	DEBUG_ENTRY
	DEBUG_PRINTF("op=0x%.4x", op);

	auto cmd = op;

	cmd |= MV88E6390_G2_SMI_PHY_CMD_FUNC_INTERNAL; /* empty mask */

	if (c45) {
		cmd |= MV88E6XXX_G2_SMI_PHY_CMD_MODE_45; /* empty mask */
	} else {
		cmd |= MV88E6XXX_G2_SMI_PHY_CMD_MODE_22;
	}

	dev <<= __bf_shf(MV88E6XXX_G2_SMI_PHY_CMD_DEV_ADDR_MASK);
	cmd |= dev & MV88E6XXX_G2_SMI_PHY_CMD_DEV_ADDR_MASK;
	cmd |= reg & MV88E6XXX_G2_SMI_PHY_CMD_REG_ADDR_MASK;

	const auto nResult = mv88e6xxx_g2_smi_phy_cmd(cmd);
	DEBUG_EXIT
	return nResult;
}

static int mv88e6xxx_g2_smi_phy_access_c22(uint16_t op, uint32_t dev, uint32_t reg) {
	return mv88e6xxx_g2_smi_phy_access(false, op, dev, reg);
}

/*
 * Public interface
 */

bool mv88e6xxx_g2_smi_phy_read_data_c22(const uint32_t nAddress, const uint32_t nRegister, uint16_t &nData) {
	DEBUG_ENTRY
	DEBUG_PRINTF("nDeviceAddress=0x%.2x nDeviceRegister=0x%.2x", nAddress, nRegister);

	auto err = mv88e6xxx_g2_smi_phy_wait();

	if (err) {
		DEBUG_EXIT
		return err;
	}

	const uint16_t op = MV88E6XXX_G2_SMI_PHY_CMD_OP_22_READ_DATA;

	err = mv88e6xxx_g2_smi_phy_access_c22(op, nAddress, nRegister);

	if (err) {
		DEBUG_EXIT
		return err;
	}

	const auto bResult = (mv88e6xxx_g2_read(MV88E6XXX_G2_SMI_PHY_DATA, nData) == 0);

	DEBUG_PRINTF("bResult=%s", bResult ? "OK" : "Error");
	DEBUG_EXIT
	return bResult;
}
