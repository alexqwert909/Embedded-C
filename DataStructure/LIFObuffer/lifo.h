#ifndef _LIFO_H_
#define _LIFO_H_

#include<stdint.h>

#define LIFO_STATIC_BUFFER_SIZE (100U)

typedef struct 
{
    uint32_t length;
    uint8_t * base;
    uint8_t * head;
}LIFO_Buf_t;

typedef enum{
    LB_NO_ERROR = 0,
    LB_ERROR,
    LB_EMPETY,
    LB_NOT_FULL,
    LB_FULL,
    LB_NULL
}LB_Status;

extern LB_Status LIFO_init(LIFO_Buf_t * lbuf, uint8_t * buffer, uint32_t size );
extern LB_Status LIFO_is_buffer_full(LIFO_Buf_t * lbuf);
extern LB_Status LIFO_add_item(LIFO_Buf_t * lbuf, uint8_t item);
extern LB_Status LIFO_remove_item(LIFO_Buf_t * lbuf, uint8_t * item);

#endif