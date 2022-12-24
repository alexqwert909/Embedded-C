#ifndef _HARDWARE_
#define _HARDWARE_
#include <stdint.h>

void hw_send_event(uint8_t state);
uint8_t get_curent_state();

#endif