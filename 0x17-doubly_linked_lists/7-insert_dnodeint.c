#include "lists.h"
#include<stdlib.h>

/**
 * insert_dnodeint_at_index - return address of instrted node
 *
 * @h: pointer to a pointer
 * @idx: index to insert new node
 * @n: value of new node
 * Return: address of insrted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int len = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return new_node;
	}

	temp = *h;
	while (temp != NULL)
	{
		if (len == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
			return (new_node);
		}
		temp = temp->next;
		len++;
	}
	return (NULL);
}
