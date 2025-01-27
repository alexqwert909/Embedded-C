#include <stdio.h>
#include <stdint.h>
#include "Subject.h"
#include "Client.h"

void main(void)
{
    uint8_t ret;
    printf("Observer Pattern \n");    
    init();
    ret = subscribe(accept1);
    if (ret != 0)
    {
        printf("An error occurred during: subscribe\n");
    }    
    serverNewData(100);

    ret = subscribe(accept2);
    if (ret != 0)
    {
        printf("An error occurred during: subscribe \n");
    }   

    serverNewData(200);

    ret = unsubscribe(accept1);
    if (ret != 0)
    {
        printf("An error occurred during: unsubscribe\n");
    } 
    serverNewData(250);
}