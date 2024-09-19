#ifndef LIST_H
#define LIST_H
#include <stdio.h>

/**
  * struct list_t - node structure for linked list
  *
  * @str: sring value
  * @len: int value
  * @next: pointer to next node
  */

typedef struct dlistint_t
{
	int n;
	struct dlistint_t *next;
  struct dlistint_t *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);

#endif
