#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns linked list size
 *
 * @h: pointer to the first node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
    size_t list_count = 0;

    while (h)
    {
        list_count += 1;
        h = h->next;
    }
    return (list_count);
}
