#ifndef _LAMP_H_
#define _LAMP_H_
#include <stdint.h>
#include <stdbool.h>

#define ON true
#define OFF false
#define DIMM_GRADIENT 200
#define DIMM_MAX_VALUE 1000
#define DIMM_MIN_VALUE 0

struct sLamp {
    uint32_t u32Id;
    bool bState;
    uint32_t u32DimValue;
    /* data */
};

void vLampDimInc(struct sLamp * lmp);
void vLampDimDec(struct sLamp * lmp);
void vLampButtonPress(struct sLamp * lmp);

static void showLamp(struct sLamp * lmp);

#endif