/**
 * @file chip.cpp
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
 * https://github.com/torvalds/linux/blob/master/drivers/net/dsa/mv88e6xxx/chip.c
 */
// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Marvell 88e6xxx Ethernet switch single-chip support
 *
 * Copyright (c) 2008 Marvell Semiconductor
 *
 * Copyright (c) 2016 Andrew Lunn <andrew@lunn.ch>
 *
 * Copyright (c) 2016-2017 Savoir-faire Linux Inc.
 *	Vivien Didelot <vivien.didelot@savoirfairelinux.com>
 */

#include <cstdint>

#include "chip.h"
#include "smi.h"
#include "port.h"

#include "debug.h"

extern volatile uint32_t s_nSysTickMillis;

static int mv88e6xxx_wait_mask(const uint32_t nDeviceAddress, const uint32_t nDeviceRegister, uint16_t mask, uint16_t val) {
	DEBUG_ENTRY

	const auto nSysTickMillis = s_nSysTickMillis;

	while ((s_nSysTickMillis - nSysTickMillis) < 50) {
		uint16_t data;
		const auto err = mv88e6xxx_read(nDeviceAddress, nDeviceRegister, data);

		if (err) {
			DEBUG_EXIT
			return err;
		}

		if ((data & mask) == val) {
			DEBUG_PRINTF("delta millis %u", s_nSysTickMillis - nSysTickMillis);
			DEBUG_EXIT
			return 0;
		}
	}

	uint16_t data;
	const auto err = mv88e6xxx_read(nDeviceAddress, nDeviceRegister, data);

	if (err) {
		DEBUG_EXIT
		return err;
	}

	if ((data & mask) == val) {
		DEBUG_EXIT
		return 0;
	}

	DEBUG_EXIT
	return -1;
}

static int mv88e6xxx_detect() {
	DEBUG_ENTRY

	uint16_t id;

	if (mv88e6xxx_port_read(0, MV88E6XXX_PORT_SWITCH_ID, id)) {
		DEBUG_EXIT
		return -1;
	}

	const auto prod_num = id & MV88E6XXX_PORT_SWITCH_ID_PROD_MASK;

	if (MV88E6XXX_PORT_SWITCH_ID_PROD_6161 != prod_num) {
		DEBUG_EXIT
		return -2;
	}

	DEBUG_PRINTF("Marvell 88E6161 0x%x revision %u", prod_num, id & MV88E6XXX_PORT_SWITCH_ID_REV_MASK);
	DEBUG_EXIT
	return 0;
}

/*
 * Public interface
 */

int mv88e6xxx_read(const uint32_t nDeviceAddress, const uint32_t nDeviceRegister, uint16_t& nValue) {
	DEBUG_ENTRY
	DEBUG_PRINTF("nDeviceAddress=0x%.2x nDeviceRegister=0x%.2x", nDeviceAddress, nDeviceRegister);

	if (mv88e6xxx_smi_read(nDeviceAddress, nDeviceRegister, nValue)) {
		DEBUG_EXIT
		return -1;
	}

	DEBUG_PRINTF("nValue=0x%.4x", nValue);
	DEBUG_EXIT
	return 0;
}

int mv88e6xxx_write(const uint32_t nDeviceAddress, const uint32_t nDeviceRegister, uint16_t nValue) {
	DEBUG_ENTRY
	DEBUG_PRINTF("nDeviceAddress=0x%.2x nDeviceRegister=0x%.2x, nValue=0x%.4x", nDeviceAddress, nDeviceRegister, nValue);

	if (mv88e6xxx_smi_write(nDeviceAddress, nDeviceRegister, nValue)) {
		DEBUG_EXIT
		return -1;
	}

	DEBUG_EXIT
	return 0;
}

int mv88e6xxx_wait_bit(const uint32_t nDeviceAddress, const uint32_t nDeviceRegister, uint32_t bit, uint16_t val) {
	return mv88e6xxx_wait_mask(nDeviceAddress, nDeviceRegister, BIT(bit), val ? BIT(bit) : 0x0000);
}

int mv88e6xxx_probe() {
	DEBUG_ENTRY

	if (mv88e6xxx_smi_init()) {
		DEBUG_EXIT
		return -1;
	}

	if (mv88e6xxx_detect()) {
		DEBUG_EXIT
		return -1;
	}

	DEBUG_EXIT
	return 0;
}
