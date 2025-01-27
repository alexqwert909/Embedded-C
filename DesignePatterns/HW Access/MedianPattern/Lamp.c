
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include "Lamp.h"

void vLampDimInc(struct sLamp * lmp){
    uint64_t u64Tmp;

    if(lmp->bState == OFF){
        lmp->bState = ON;
        lmp->u32DimValue = DIMM_MIN_VALUE;
    }

    u64Tmp = lmp->u32DimValue + DIMM_GRADIENT;
    if(u64Tmp > DIMM_MAX_VALUE){
        lmp->u32DimValue = DIMM_MAX_VALUE;
    }else{
        lmp->u32DimValue += DIMM_GRADIENT;
    }
    showLamp(lmp);
    
}

void vLampDimDec(struct sLamp * lmp){
    int64_t i64Ttmp;
    i64Ttmp = lmp->u32DimValue - DIMM_GRADIENT;
     if(i64Ttmp < DIMM_MIN_VALUE){
        lmp->u32DimValue = DIMM_MIN_VALUE;
    }else{
        lmp->u32DimValue -= DIMM_GRADIENT;
    }
    showLamp(lmp);
}

void vLampButtonPress(struct sLamp * lmp){
    if(lmp->bState == ON){
        lmp->bState = OFF;
    }else{
        lmp->bState = ON;
    }    
    showLamp(lmp);
}
static void showLamp(struct sLamp * lmp){
    printf(" Lamp %i update: State : %i Dim: %d \n", lmp->u32Id,lmp->bState,lmp->u32DimValue);

}