#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "list.h"

void LL_append(node_t ** node, uint32_t data){

    node_t * n = *node;

    if(node == NULL){ return; }

     /* If the Linked List is empty, then make the new node as head */
    if (*node == NULL)
    {
        (*node) = (node_t *) malloc(sizeof(node_t));
        (*node)->data = data;
        (*node)->next = NULL;       
    }else{    
        while(n->next !=NULL){
            n = n->next;
        }
        n->next = (node_t *) malloc(sizeof(node_t));
        n->next->data = data;
        n->next->next = NULL;
    }
}

void LL_delete(node_t ** node, uint32_t data){

    node_t * n = *node;
    node_t * prev = NULL;

    if(node == NULL){ return; }

    while((n->data != data) && (n->next !=NULL)){
        prev =n;
        n = n->next;
    }

    if (prev == NULL)
    {        
        *node = (*node)->next;
        free(n); 
          
    }else{
        prev->next = n->next;
        free(n); 
    }  
}

void LL_finde(node_t * node, uint32_t data){

    node_t * n = node;

    while((n->data != data) && (n->next !=NULL)){
        n = n->next;
    }
}

void LL_print(node_t ** node){

    node_t * n = *node;

    while (n != NULL)
    {
        printf("%i ",n->data);
        n = n->next;
    }
    printf("\n");
}