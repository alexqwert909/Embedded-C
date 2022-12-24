#include <stdio.h>
#include <stdint.h>
#include "hardware.h"
#include "button.h"

void main(void)
{
    printf("Debouncing Pattern \n");    
    hw_send_event(0);
    hw_send_event(1);
    hw_send_event(0);
    hw_send_event(0);
    hw_send_event(1);
    hw_send_event(1);
    
    hw_send_event(0);
    hw_send_event(1);    
    hw_send_event(0);
    hw_send_event(1);
    hw_send_event(0);
    hw_send_event(0);
}