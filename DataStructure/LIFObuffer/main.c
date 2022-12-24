#include <stdio.h>
#include <stdint.h>
#include"lifo.h"



LIFO_Buf_t lbuf;
uint8_t buffer[LIFO_STATIC_BUFFER_SIZE];

void main(void)
{
    LB_Status status;
    uint8_t val = 5;

    printf("LIFO buffer \n");    
    
    status = LIFO_is_buffer_full(&lbuf);
    printf("LIFO_is_buffer_full: %i \n", status);    
        
    status = LIFO_add_item(&lbuf,val);
    printf("LIFO_add_item: %i \n", status); 
        
    status = LIFO_remove_item(&lbuf,&val);
    printf("LIFO_remove_item: %i \n", status); 

    status = LIFO_init(&lbuf, buffer, LIFO_STATIC_BUFFER_SIZE);
    printf("LIFO_init: %i \n", status); 

    status = LIFO_remove_item(&lbuf,&val);
    printf("LIFO_remove_item: %i \n", status); 

    val = 7;
    status = LIFO_add_item(&lbuf,val);
    printf("LIFO_add_item: %i \n", status); 

    val = 15;
    status = LIFO_add_item(&lbuf,val);
    printf("LIFO_add_item: %i \n", status); 

    val = 0;
    status = LIFO_remove_item(&lbuf,&val);
    printf("LIFO_remove_item: %i Value: %i\n", status,val); 

    status = LIFO_remove_item(&lbuf,&val);
    printf("LIFO_remove_item: %i Value: %i\n", status,val); 

    val = 60;
    status = LIFO_remove_item(&lbuf,&val);
    printf("LIFO_remove_item: %i Value: %i\n", status,val); 

}