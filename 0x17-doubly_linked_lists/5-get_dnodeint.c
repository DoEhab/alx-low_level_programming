#include "lists.h"

/**
 * get_dnodeint_at_index - return node on selected index
 *
 * @head: pointer to the starting node
 * @index: index of node to be returned
 * Return: node at certain index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;

	while (head)
	{
		if (len == index)
			return (head);
		head = head->next;
		len++;
	}
	return (NULL);
}
