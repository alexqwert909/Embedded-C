#ifndef _CIRCBUFFER_
#define _CIRCBUFFER_
#include<stdint.h>
#include <stdbool.h>

typedef struct {
    uint8_t *buffer;
    uint8_t size;
    uint8_t head;
    uint8_t tail;
    uint8_t count;
}circ_buf_t;

typedef enum{
    CIRC_BUFFER_OK =0,
    CIRC_BUFFER_ERROR,
    CIRC_BUFFER_FULL,
    CIRC_BUFFER_IS_EMPETY
}circ_buf_state_t;


circ_buf_state_t circ_buf_init(circ_buf_t* s_buf, uint8_t* pBuf, uint8_t size);
circ_buf_state_t circ_buf_add(circ_buf_t* s_buf, uint8_t data );
circ_buf_state_t circ_buf_rem(circ_buf_t* s_buf, uint8_t* data);
bool circ_buf_is_full(circ_buf_t* s_buf);
bool circ_buf_is_empety(circ_buf_t* s_buf);

#endif