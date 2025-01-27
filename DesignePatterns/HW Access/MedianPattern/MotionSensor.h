#ifndef _MOTION_SENSOR_H_
#define _MOTION_SENSOR_H_

#include <stdint.h>
#include <stdbool.h>

struct sSensor {
    uint32_t u32Id;
    bool bState;
    bool bOldState;
};

#endif