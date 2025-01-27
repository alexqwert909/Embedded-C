#include <stdio.h>
#include <stdint.h>
#include "MotionSensor.h"
#include "Switch.h"
#include "Lamp.h"
#include "LightManger.h"

struct sSwitch sw1,sw2;
struct sLamp lamp1;

void mediatorTest(){
    InitLightManager();
    RegisterSwitch(&sw1);
    RegisterSwitch(&sw2);
    RegisterLamp(&lamp1);
    for (size_t i = 0; i < 10; i++)
    {
       vSwitcDimhInc(&sw1);
    }
    vSwitcDimDec(&sw1);
    vSwitcDimDec(&sw1);
    vSwitchButtonPress(&sw1);
    vSwitchButtonPress(&sw2);    
}
void main(void) {
    printf("Median pattern!\n");
    sw1.u32Id = 1;
    sw2.u32Id = 2;
    mediatorTest();
}
