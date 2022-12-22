#include <stdint.h>
#include <stdbool.h>
#include "circbuffer.h"

circ_buf_state_t circ_buf_init(circ_buf_t* s_buf, uint8_t * pBuf, uint8_t size){
    if ((s_buf == NULL)||(pBuf == NULL)||(size == 0))
    {
        return CIRC_BUFFER_ERROR;
    }
    
    s_buf->buffer = pBuf;
    s_buf->size = size;
    s_buf->head = 0;
    s_buf->tail = 0; 
    s_buf->count = 0; 

    return CIRC_BUFFER_OK;
}

circ_buf_state_t circ_buf_add(circ_buf_t* s_buf, uint8_t data ){

    if (s_buf == NULL)
    {
        return CIRC_BUFFER_ERROR;
    }
    
    s_buf->buffer[s_buf->tail] = data;
    s_buf->tail++;
    s_buf->count++;

    if (s_buf->tail >s_buf->size)
    {
        s_buf->tail = 0;
    }
    return CIRC_BUFFER_OK;
}

circ_buf_state_t circ_buf_rem(circ_buf_t* s_buf, uint8_t * data){

    if (s_buf == NULL)
    {
        return CIRC_BUFFER_ERROR;
    }

    *data = s_buf->buffer[s_buf->head];
    s_buf->head++;
    s_buf->count--;
    
    if (s_buf->head >s_buf->size)
    {
        s_buf->head = 0;
    }

    return CIRC_BUFFER_OK;
}

inline bool circ_buf_is_full(circ_buf_t* s_buf){
    return (s_buf->count >= s_buf->size );
}

inline bool circ_buf_is_empety(circ_buf_t* s_buf){
    return (s_buf->count==0);
}