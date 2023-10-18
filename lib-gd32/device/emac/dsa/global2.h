/**
 * @file global2.h
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
 * https://github.com/torvalds/linux/blob/master/drivers/net/dsa/mv88e6xxx/global2.h
 */
/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Marvell 88E6xxx Switch Global 2 Registers support
 *
 * Copyright (c) 2008 Marvell Semiconductor
 *
 * Copyright (c) 2016-2017 Savoir-faire Linux Inc.
 *	Vivien Didelot <vivien.didelot@savoirfairelinux.com>
 */

#ifndef GLOBAL2_H_
#define GLOBAL2_H_

#include <cstdint>

/* Offset 0x18: SMI PHY Command Register */
#define MV88E6XXX_G2_SMI_PHY_CMD			0x18
#define MV88E6XXX_G2_SMI_PHY_CMD_BUSY			0x8000
#define MV88E6390_G2_SMI_PHY_CMD_FUNC_MASK		0x6000
#define MV88E6390_G2_SMI_PHY_CMD_FUNC_INTERNAL		0x0000
#define MV88E6390_G2_SMI_PHY_CMD_FUNC_EXTERNAL		0x2000
#define MV88E6390_G2_SMI_PHY_CMD_FUNC_SETUP		0x4000
#define MV88E6XXX_G2_SMI_PHY_CMD_MODE_MASK		0x1000
#define MV88E6XXX_G2_SMI_PHY_CMD_MODE_45		0x0000
#define MV88E6XXX_G2_SMI_PHY_CMD_MODE_22		0x1000
#define MV88E6XXX_G2_SMI_PHY_CMD_OP_MASK		0x0c00
#define MV88E6XXX_G2_SMI_PHY_CMD_OP_22_WRITE_DATA	0x0400
#define MV88E6XXX_G2_SMI_PHY_CMD_OP_22_READ_DATA	0x0800
#define MV88E6XXX_G2_SMI_PHY_CMD_OP_45_WRITE_ADDR	0x0000
#define MV88E6XXX_G2_SMI_PHY_CMD_OP_45_WRITE_DATA	0x0400
#define MV88E6XXX_G2_SMI_PHY_CMD_OP_45_READ_DATA_INC	0x0800
#define MV88E6XXX_G2_SMI_PHY_CMD_OP_45_READ_DATA	0x0c00
#define MV88E6XXX_G2_SMI_PHY_CMD_DEV_ADDR_MASK		0x03e0
#define MV88E6XXX_G2_SMI_PHY_CMD_REG_ADDR_MASK		0x001f
#define MV88E6XXX_G2_SMI_PHY_CMD_SETUP_PTR_MASK		0x03ff

/* Offset 0x19: SMI PHY Data Register */
#define MV88E6XXX_G2_SMI_PHY_DATA	0x19

bool mv88e6xxx_g2_smi_phy_read_data_c22(const uint32_t nAddress, const uint32_t nRegister, uint16_t& nValue);

#endif /* GLOBAL2_H_ */
