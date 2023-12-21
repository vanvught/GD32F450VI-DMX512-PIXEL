/*
 * dmx.h
 */

#ifndef DMX_H_
#define DMX_H_

#include "dmxconst.h"
#include "gd32/dmx_config.h"

class Dmx {
public:
	Dmx();

	void SetSendDataWithoutSC(uint32_t nPortIndex, const uint8_t *pData, uint32_t nLength);
	void SetPortDirection(uint32_t nPortIndex, dmx::PortDirection portDirection, bool bEnableData);

	void SetOutputStyle(const uint32_t nPortIndex, const dmx::OutputStyle outputStyle);
	dmx::OutputStyle GetOutputStyle(const uint32_t nPortIndex) const;

	void EnableOutput(const uint32_t nPortIndex);
	void SetOutput();

private:
	void StartData(const uint32_t nUart, const uint32_t nPortIndex);
	void StopData(const uint32_t nUart, const uint32_t nPortIndex);
	void StartOutput(const uint32_t nPortIndex);

private:
	dmx::PortDirection m_tDmxPortDirection[dmx::config::max::OUT];
};


#endif /* DMX_H_ */
