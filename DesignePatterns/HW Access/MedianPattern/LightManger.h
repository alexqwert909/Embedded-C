#ifndef _LIGHT_MANAGER_
#define _LIGHT_MANAGER_

#include"Switch.h"

#define NR_OF_SWITCHES 3
#define NR_OF_LAMP 1
#define NR_OF_MOTIONS_SENSOR 1
/* implementation of Mediator patter */
struct sLightManger {
    /* data */
    struct sSwitch * sSw[NR_OF_SWITCHES];
    struct sLamp * sLamp[NR_OF_LAMP];

};

void vSwitchButtonPress(struct sSwitch * sw);
void vSwitcDimhInc(struct sSwitch * sw);
void vSwitcDimDec(struct sSwitch * sw);

void InitLightManager();
bool RegisterLamp(struct sLamp * sLp);
bool RegisterSwitch(struct sSwitch * sSw);
#endif