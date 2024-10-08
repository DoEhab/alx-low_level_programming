#include "lists.h"

/**
 * sum_dlistint - return sum of node values
 *
 * @head: pointer to the starting node
 * Return: sum of node values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
