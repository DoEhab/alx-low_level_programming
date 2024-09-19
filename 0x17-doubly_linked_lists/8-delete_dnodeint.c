#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at certain index
 *
 * @head: pointer to a pointer
 * @index: index of node to be deleted
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}
    
	while (temp != NULL)
	{
		if (len == index)
		{
			if (temp->prev != NULL)
				temp->prev->next = temp->next;

			if (temp->next != NULL)
				temp->next->prev = temp->prev;

			free(temp);
			return (1);
		}
		temp = temp->next;
		len++;
	}
	return (-1);
}
