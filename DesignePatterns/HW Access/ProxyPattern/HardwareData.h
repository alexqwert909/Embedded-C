#ifndef _HARDWARE_DATA_H_
#define _HARDWARE_DATA_H_
#include <stdint.h>
#define SERIAL_ADDRESS ((void *)0x100)
struct HwData
{
    uint32_t speed;
    uint8_t u8SendComplete;
    uint8_t u8ReceivedComplete;
    uint8_t u8SendData;
    uint8_t u8ReceivedData;
};

extern struct HwData sHwData;
#endif