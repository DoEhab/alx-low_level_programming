#include "lists.h"
#include<stdlib.h>

/**
 * add_dnodeint - return new head to list
 *
 * @head: pointer to the starting node
 * @n: the node value
 * Return: head of linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;
    
    new_node->next = *head;
    new_node->prev = NULL;
    if (*head != NULL)
        (*head)->prev = new_node;
    new_node->n = n;
    *head = new_node;

    return new_node;
}
