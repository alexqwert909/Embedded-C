#include <stdbool.h>
#include <stdint.h>
#include "HardwareProxy.h"
#include "HardwareData.h"

#define RETURN_OK 0
#define RETURN_NO_DATA 1

void * deviceAddr;

void initialize(void){
    deviceAddr = SERIAL_ADDRESS;
    sHwData.speed = 0;
    sHwData.u8ReceivedComplete = 0;
    sHwData.u8SendComplete = 0;
}
int configure(uint32_t speed){
    sHwData.speed = speed;

}
void disable(void){
     deviceAddr = NULL;

}
uint8_t access(uint8_t * data){
    uint8_t ret = RETURN_NO_DATA;
    if(sHwData.u8ReceivedComplete == 1){
        *data = sHwData.u8ReceivedData;
        ret = RETURN_OK;
    }
    return ret;
}

void mutate(uint8_t data){
    sHwData.u8SendData = data;
    sHwData.u8SendComplete = 0;

}
void marshal(void){

}
void unmarshal(void){

}