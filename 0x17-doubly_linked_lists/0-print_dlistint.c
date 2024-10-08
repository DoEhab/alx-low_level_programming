#include "lists.h"

/**
  * print_dlistint - prints the values of linked list
  *
  * @h: pointer to the starting node
  * Return: length of linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
