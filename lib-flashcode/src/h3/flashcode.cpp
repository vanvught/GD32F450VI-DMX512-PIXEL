/**
 * @file flashcode.cpp
 *
 */
/* Copyright (C) 2021-2026 by Arjan van Vught mailto:info@gd32-dmx.org
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

#include <cstdint>
#include <cstdio>
#include <cassert>

#include "flashcode.h"
#include "spi/spi_flash.h"

using flashcode::Result;

FlashCode::FlashCode() {
    FLASHCODE_DEBUG_ENTRY();
    assert(s_this == nullptr);
    s_this = this;

    if (!spi::flash::Probe()) {
        FLASHCODE_DEBUG_PUTS("No SPI flash chip");
    } else {
        printf("Detected %s with sector size %d total %d bytes\n", spi::flash::Name(), static_cast<unsigned>(spi::flash::SectorSize()), static_cast<unsigned>(spi::flash::Size()));
        detected_ = true;
    }

    FLASHCODE_DEBUG_EXIT();
}

FlashCode::~FlashCode() {
    FLASHCODE_DEBUG_ENTRY();

    FLASHCODE_DEBUG_EXIT();
}

const char* FlashCode::GetName() const {
    return spi::flash::Name();
}

uint32_t FlashCode::GetSize() const {
    return spi::flash::Size();
}

uint32_t FlashCode::GetSectorSize() const {
    return spi::flash::SectorSize();
}

bool FlashCode::Read(uint32_t offset, std::span<uint8_t> buffer, flashcode::Result& result) {
    FLASHCODE_DEBUG_ENTRY();

    result = spi::flash::cmd::Read(offset, buffer) ? Result::kOk : Result::kError;

    FLASHCODE_DEBUG_PRINTF("result=%d", static_cast<int>(result));
    FLASHCODE_DEBUG_EXIT();
    return true;
}

bool FlashCode::Erase(uint32_t offset, uint32_t length, flashcode::Result& result) {
    FLASHCODE_DEBUG_ENTRY();
    FLASHCODE_DEBUG_PRINTF("offset=%u, length=%u", static_cast<unsigned>(offset), static_cast<unsigned>(length));

    result = spi::flash::cmd::Erase(offset, length) ? Result::kOk : Result::kError;

    FLASHCODE_DEBUG_PRINTF("result=%d", static_cast<int>(result));
    FLASHCODE_DEBUG_EXIT();
    return true;
}

bool FlashCode::Write(uint32_t offset, std::span<const uint8_t> buffer, flashcode::Result& result) {
    FLASHCODE_DEBUG_ENTRY();

    result = spi::flash::cmd::Write(offset, buffer) ? Result::kOk : Result::kError;

    FLASHCODE_DEBUG_PRINTF("result=%d", static_cast<int>(result));
    FLASHCODE_DEBUG_EXIT();
    return true;
}
