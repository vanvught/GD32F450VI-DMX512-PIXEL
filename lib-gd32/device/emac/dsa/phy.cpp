/*
 * phy.cpp
 */

#include <cstdint>

#include "global2.h"

#include "debug.h"

namespace dsa {

bool phy_read(const uint32_t nAddress, const uint32_t nRegister, uint16_t& nValue) {
	const auto bResult = mv88e6xxx_g2_smi_phy_read_data_c22(nAddress, nRegister, nValue);
	DEBUG_PRINTF("[%s] nAddress=0x%.2x Register=0x%.2x nValue=0x%.4x", bResult ? "OK" : "Error" , nAddress, nRegister, nValue);
	return bResult;
}

}  // namespace dsa

