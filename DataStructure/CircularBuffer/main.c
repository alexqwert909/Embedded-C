#include <stdio.h>
#include "circbuffer.h"
#define CIRC_BUF_SIZE (5u)

uint8_t buf[CIRC_BUF_SIZE];
circ_buf_t circ_buf;
circ_buf_state_t state;

void main(void) {
    uint8_t data;

    printf("Hello, world!\n");

    state = circ_buf_init(&circ_buf, buf, CIRC_BUF_SIZE);

    for(int i = 0; i < 6; i++){
        if (!(circ_buf_is_full(&circ_buf))){
            circ_buf_add(&circ_buf,i);
        }else{
            printf("buffer is full %i \n",i);
        }        
    }
    
    circ_buf_rem(&circ_buf,&data);
    circ_buf_add(&circ_buf,5);
    circ_buf_add(&circ_buf,6);

     for(int i = 0; i < 6; i++){         
        if (!(circ_buf_is_empety(&circ_buf))){            
            circ_buf_rem(&circ_buf,&data);
            printf("%i ",data);
        }else{            
        }
     }
}
