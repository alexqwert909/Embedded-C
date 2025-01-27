
#include "LightManger.h"
#include "Switch.h"
#include "Lamp.h"

struct sLightManger manager;

void vSwitchButtonPress(struct sSwitch * sw){
    if (sw->u32Id == 1)
    {
        vLampButtonPress(manager.sLamp[0]);
    }

    if (sw->u32Id == 2)
    {
        vLampButtonPress(manager.sLamp[0]);
    }

    if (sw->u32Id == 3)
    {
    }
    

}

void vSwitcDimhInc(struct sSwitch * sw){
    if (sw->u32Id == 1)
    {
        vLampDimInc(manager.sLamp[0]);
    }

    if (sw->u32Id == 2)
    {
        vLampDimInc(manager.sLamp[0]);
    }

    if (sw->u32Id == 3)
    {
    }
    
}

void vSwitcDimDec(struct sSwitch * sw){
    if (sw->u32Id == 1)
    {
        vLampDimDec(manager.sLamp[0]);
    }

    if (sw->u32Id == 2)
    {
        vLampDimDec(manager.sLamp[0]);
    }

    if (sw->u32Id == 3)
    {
    }
    
}



void InitLightManager(){
    for (size_t i = 0; i < NR_OF_SWITCHES; i++){
        manager.sSw[i] = NULL;
    }    
    for (size_t i = 0; i < NR_OF_LAMP; i++){
        /* code */
        manager.sLamp[i] = NULL;
    }
    
}

bool RegisterLamp(struct sLamp * sLp){
    size_t i = 0;
    bool ret = false;

    while ((manager.sLamp[i] != NULL)&&(i < NR_OF_LAMP)){
        i++;
    }

    if (i < NR_OF_LAMP){
        manager.sLamp[i] = sLp;
        ret = true;
    }
    
    return ret;    
}

bool RegisterSwitch(struct sSwitch * sSw){
    size_t i = 0;
    bool ret = false;

    while ((manager.sSw[i] != NULL)&&(i < NR_OF_SWITCHES)){
        i++;
    }

    if (i < NR_OF_SWITCHES){
        manager.sSw[i] = sSw;
        ret = true;
    }
    
    return ret;    
}