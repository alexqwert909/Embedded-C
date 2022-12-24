
#include<stdint.h>
#include"lifo.h"

LB_Status LIFO_init(LIFO_Buf_t * lbuf, uint8_t * buffer, uint32_t size )
{
    if ((! lbuf) || (! buffer) || (! size))
    {
        return LB_NULL;
    }

    lbuf->length = size;
    lbuf->base = buffer;
    lbuf->head = lbuf->base;

    return LB_NO_ERROR;
}

LB_Status LIFO_is_buffer_full(LIFO_Buf_t * lbuf)
{
    if ((! lbuf) || (! lbuf->head) || (! lbuf->base))
    {
        return LB_NULL;
    }
    if (lbuf->head >= (lbuf->base + lbuf->length))
    {
        return LB_FULL;
    }
    else
    {
        return LB_NOT_FULL;
    } 
}

LB_Status LIFO_add_item(LIFO_Buf_t * lbuf, uint8_t item)
{
    if ((! lbuf) || (! lbuf->head) || (! lbuf->base))
    {
        return LB_NULL;
    }
    if (lbuf->head >= (lbuf->base + lbuf->length))
    {
        return LB_FULL;
    }
    else
    {
        *lbuf->head = item;
        lbuf->head++;
        return LB_NO_ERROR;
    }
}

LB_Status LIFO_remove_item(LIFO_Buf_t * lbuf, uint8_t * item)
{
    if ((! lbuf) || (! lbuf->head) || (! lbuf->base) || (! item))
    {
        return LB_NULL;
    }

    if (lbuf->head <= lbuf->base )
    {
        return LB_EMPETY;
    }
    else
    {
        lbuf->head--;
        *item = *lbuf->head ;
        return LB_NO_ERROR;
    }
}