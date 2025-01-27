#include <stdio.h>
#include <stdint.h>
#include "HardwareData.h"
#include "HardwareProxy.h"
#include "Client1.h"
void main(void)
{
    printf("Proxy Pattern \n");
    initialize();
    if( client1Init() == 0){
        client1Run();
    }
    
}