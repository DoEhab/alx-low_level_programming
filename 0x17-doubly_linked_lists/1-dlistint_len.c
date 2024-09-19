#include "lists.h"

/**
 * dlistint_len - return the length of linked list
 *
 * @h: pointer to the starting node
 * Return: length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t len = 0;

    while (h)
    {
        len++;
        h = h->next;
    }
    return (len);
}
