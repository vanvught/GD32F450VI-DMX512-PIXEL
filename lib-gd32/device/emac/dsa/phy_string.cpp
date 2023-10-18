/*
 * dsa_string.cpp
 */

#include <cstdint>
#include <cassert>

#include "device/emac/mv88e6161.h"

#if !defined (ARRAY_SIZE)
# define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
#endif

namespace dsa {
static constexpr char SPEED[3][10] = { "10Mbps", "100Mbps", "1000Mbps" };

const char *phy_string_get_link(const Link link) {
	return link == Link::STATE_UP ? "up" : "down";
}

const char *phy_string_get_duplex(const Duplex duplex) {
	return duplex == Duplex::DUPLEX_HALF ? "half" : "full";
}

const char *phy_string_get_speed(const Speed speed) {
	const auto nIndex = static_cast<uint32_t>(speed);

	assert(nIndex < ARRAY_SIZE(SPEED));
	return SPEED[nIndex];
}

const char *phy_string_get_flowcontrol(const bool flowcontrol) {
	return flowcontrol ? "enabled" : "disabled";
}
}
