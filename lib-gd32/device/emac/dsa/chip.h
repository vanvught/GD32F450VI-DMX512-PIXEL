/**
 * @file chip.h
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
 * https://github.com/torvalds/linux/blob/master/drivers/net/dsa/mv88e6xxx/chip.h
 */
/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Marvell 88E6xxx Ethernet switch single-chip definition
 *
 * Copyright (c) 2008 Marvell Semiconductor
 */

#ifndef CHIP_H_
#define CHIP_H_

#include <cstdint>

static constexpr uint32_t MV88E6XXX_PHY_ADDRESS       = 0x04;
static constexpr uint32_t MV88E6XXX_PORT_PHY_ADDRESS  = 0x00;
static constexpr uint32_t MV88E6XXX_PORT_BASE_ADDRESS = 0x10;
static constexpr uint32_t MV88E6XXX_GLOBAL1_ADDRESS   = 0x1b;
static constexpr uint32_t MV88E6XXX_GLOBAL2_ADDRESS   = 0x1c;

int mv88e6xxx_probe();
int mv88e6xxx_read(const uint32_t nDeviceAddress, const uint32_t nDeviceRegister, uint16_t& nValue);
int mv88e6xxx_write(const uint32_t nDeviceAddress, const uint32_t nDeviceRegister, uint16_t nValue);
int mv88e6xxx_wait_bit(const uint32_t nDeviceAddress, const uint32_t nDeviceRegister, uint32_t nBit, uint16_t nValue);

#endif /* CHIP_H_ */
