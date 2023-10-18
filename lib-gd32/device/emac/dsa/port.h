/**
 * @file port.h
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
 * https://github.com/torvalds/linux/blob/master/drivers/net/dsa/mv88e6xxx/port.h
 */
/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Marvell 88E6xxx Switch Port Registers support
 *
 * Copyright (c) 2008 Marvell Semiconductor
 *
 * Copyright (c) 2016-2017 Savoir-faire Linux Inc.
 *	Vivien Didelot <vivien.didelot@savoirfairelinux.com>
 */

#ifndef PORT_H_
#define PORT_H_

#include <cstdint>

/* Offset 0x00: Port Status Register */
#define MV88E6XXX_PORT_STS					0x00
#define MV88E6XXX_PORT_STS_PAUSE_EN			0x8000
#define MV88E6XXX_PORT_STS_MY_PAUSE			0x4000
#define MV88E6XXX_PORT_STS_HD_FLOW			0x2000
#define MV88E6XXX_PORT_STS_PHY_DETECT		0x1000
#define MV88E6XXX_PORT_STS_LINK				0x0800
#define MV88E6XXX_PORT_STS_DUPLEX			0x0400
#define MV88E6XXX_PORT_STS_SPEED_MASK		0x0300
#define MV88E6XXX_PORT_STS_SPEED_10			0x0000
#define MV88E6XXX_PORT_STS_SPEED_100		0x0100
#define MV88E6XXX_PORT_STS_SPEED_1000		0x0200
#define MV88E6XXX_PORT_STS_SPEED_10000		0x0300
#define MV88E6XXX_PORT_STS_TX_PAUSED		0x0020
#define MV88E6XXX_PORT_STS_FLOW_CTL			0x0010
#define MV88E6XXX_PORT_STS_CMODE_MASK		0x000f
#define MV88E6XXX_PORT_STS_CMODE_MII_PHY	0x0001
#define MV88E6XXX_PORT_STS_CMODE_MII		0x0002
#define MV88E6XXX_PORT_STS_CMODE_GMII		0x0003
#define MV88E6XXX_PORT_STS_CMODE_RMII_PHY	0x0004
#define MV88E6XXX_PORT_STS_CMODE_RMII		0x0005
#define MV88E6XXX_PORT_STS_CMODE_RGMII		0x0007
#define MV88E6XXX_PORT_STS_CMODE_100BASEX	0x0008
#define MV88E6XXX_PORT_STS_CMODE_1000BASEX	0x0009
#define MV88E6XXX_PORT_STS_CMODE_SGMII		0x000a
#define MV88E6XXX_PORT_STS_CMODE_2500BASEX	0x000b
#define MV88E6XXX_PORT_STS_CMODE_XAUI		0x000c
#define MV88E6XXX_PORT_STS_CMODE_RXAUI		0x000d

/* Offset 0x03: Switch Identifier Register */
#define MV88E6XXX_PORT_SWITCH_ID			0x03
#define MV88E6XXX_PORT_SWITCH_ID_PROD_MASK	0xfff0
#define MV88E6XXX_PORT_SWITCH_ID_PROD_6161	0x1610
#define MV88E6XXX_PORT_SWITCH_ID_REV_MASK	0x000f

int mv88e6xxx_port_read(const uint32_t nPortNumber, const uint32_t nRegister, uint16_t& nValue);

#endif /* PORT_H_ */
