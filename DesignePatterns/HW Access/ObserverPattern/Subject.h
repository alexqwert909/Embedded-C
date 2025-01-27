#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#define MAXIMUM_NUMBER_OF_CLIENTS 10

typedef void(*handle)(uint8_t data);

uint8_t subscribe(const handle pHandle);
uint8_t unsubscribe(const handle pHandle);
void notify(uint8_t new_data);
void init();
void serverNewData(uint8_t data);

#endif
