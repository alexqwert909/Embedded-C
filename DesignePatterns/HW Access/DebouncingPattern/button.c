#include <stdint.h>
#include "button.h"
#include "hardware.h"

uint8_t current_button_state = 0;
uint8_t old_state;
uint8_t over_all_timeout = DEALY_TIMEOUT;

static uint8_t delay();

void event_received(void)
{
    current_button_state++;
    current_button_state %= 2;
    printf("TOGGLE Curent state: %i\n",current_button_state);
}

void button_driver_event_receive(void)
{
    uint8_t state;
    /* delay  */ 
    if(delay())
    {
        state = get_curent_state();
        if(old_state != state)
        {
            event_received();
            old_state = state;
        }
    }
}
static uint8_t delay()
{
    uint8_t ret = 0;
    if(over_all_timeout > 0 )
    {
        over_all_timeout--;
    }
    else{
        ret = 1;
        over_all_timeout = DEALY_TIMEOUT;
    }
    return ret;
}