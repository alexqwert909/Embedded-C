#include <stdio.h>
#include <stdlib.h>
#include "list.h"

node_t * head_node = NULL;

int main(void) {
    uint8_t data;

    printf( "Hello, world!\n");

    for(data = 0; data < 10; data++){
        LL_append(&head_node,data);
    }

    LL_print(&head_node);
    LL_delete(&head_node, 9);
    LL_print(&head_node);

    LL_delete(&head_node, 1);
    LL_print(&head_node);

    LL_append(&head_node, 10);
    LL_print(&head_node);

     LL_delete(&head_node, 0);
    LL_print(&head_node);
}
