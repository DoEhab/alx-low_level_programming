#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees the node
  *
  * @head: pointer to the node
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *temp_node;

	while(head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
