#pragma once

#include "deviceBase.h"
#include "devicedummy.h"
#include "errorcodes.h"

class DeviceDummy : public DSO::DeviceBase {
public:
    using DeviceBase::DeviceBase;
    virtual void updatePretriggerPosition(double position);
    virtual void updateRecordLength(unsigned int index);
    virtual ErrorCode updateSamplerate(double timebase);
    virtual ErrorCode updateGain(unsigned channel, unsigned char gain);
    virtual void updateOffset(unsigned int channel, unsigned short int offsetValue);
    virtual ErrorCode updateTriggerSource(bool special, unsigned int channel);
    virtual ErrorCode updateTriggerLevel(unsigned int channel, double level);
    virtual ErrorCode updateTriggerSlope(DSO::Slope slope);
};
