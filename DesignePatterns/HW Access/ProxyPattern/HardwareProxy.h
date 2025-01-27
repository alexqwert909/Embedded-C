#ifndef _HARDWARE_PROXY_H_
#define _HARDWARE_PROXY_H_

void initialize(void);
int configure(uint32_t speed);
void disable(void);
uint8_t access(uint8_t * data);
void mutate(uint8_t data);
static void marshal(void);
static void unmarshal(void);

#endif