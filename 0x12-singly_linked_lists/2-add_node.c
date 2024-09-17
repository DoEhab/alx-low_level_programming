#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
        list_t *new_node;
        //char *copied_str;

        new_node = malloc(sizeof(list_t));
        if (new_node == NULL)
                return NULL;
        
        new_node->str = strdup(str);
        new_node->len = strlen(str);
        new_node->next = *head;

        *head = new_node;
        return new_node;

}
