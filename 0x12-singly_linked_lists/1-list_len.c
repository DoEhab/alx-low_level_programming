#include "lists.h"
#include <stdio.h>

size_t list_len(const list_t *h)
{
    size_t list_count = 0;

    while(h)
    {
        list_count += 1;
        h = h->next;
    }
    return list_count;
}
