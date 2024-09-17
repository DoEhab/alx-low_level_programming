#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node_end - add node to the end of list
  *
  * @head: pointer to the current node
  * @str: char array to str value
  * Return: return end node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		while ((*head)->next != NULL)
			(*head) = (*head)->next;

		(*head)->next = node;
	}
	return (*head);
}
