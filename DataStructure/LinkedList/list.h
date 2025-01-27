#ifndef _LIST_
#define _LIST_
#include<stdint.h>

typedef struct node node_t;

struct node{
uint32_t data;
node_t * next;
};

void LL_append(node_t ** node, uint32_t data);
void LL_print(node_t ** node);
void LL_delete(node_t ** node, uint32_t data);

#endif