#include<stdint.h>
#include"Subject.h"


handle notification_handle[MAXIMUM_NUMBER_OF_CLIENTS];

uint8_t unsubscribe(const handle pHandle)
{
    uint8_t i = 0;
    uint8_t ret = 1;

    while((notification_handle[i] != pHandle)&&(i < MAXIMUM_NUMBER_OF_CLIENTS))
    {
        i++;
    }
    if (i < MAXIMUM_NUMBER_OF_CLIENTS)
    {
        notification_handle[i] = NULL;
        ret = 0;
    }
    return ret;
}

void notify(uint8_t new_data)
{
    uint8_t i;
    for ( i = 0; i < MAXIMUM_NUMBER_OF_CLIENTS; i++)
    {
        if( notification_handle[i] != NULL)
        {
            (notification_handle[i])(new_data);
        }
    }
}

uint8_t subscribe(const handle pHandle)
{
    uint8_t i = 0;
    uint8_t ret = 1;

    while((notification_handle[i] != NULL)&&(i < MAXIMUM_NUMBER_OF_CLIENTS))
    {
        i++;
    }
    if (i < MAXIMUM_NUMBER_OF_CLIENTS)
    {
        notification_handle[i] = pHandle;
        ret = 0;
    }
    return ret;
}

void init()
{
    uint8_t i;
    for ( i = 0; i < MAXIMUM_NUMBER_OF_CLIENTS; i++)
    {
        notification_handle[i] = NULL;
    }
}

void serverNewData(uint8_t data)
{
    notify(data);
}