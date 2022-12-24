#include <stdint.h>
#include "hardware.h"
#include "button.h"

uint8_t hw_state;

void hw_send_event(uint8_t state)
{
    hw_state = state;
    button_driver_event_receive();
}

uint8_t get_curent_state()
{
    return hw_state;
}