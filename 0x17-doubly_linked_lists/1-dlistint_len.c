#include "lists.h"

/**
  * print_dlistint - return the length of linked list
  *
  * @h: pointer to the starting node
  * Return: length of linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
    size_t len = 0;
    if (h == NULL)
        return 0;
    
    while (h)
    {
        if (h->next != NULL)
            len++;
        h = h->next;
    }
    return len;
}
