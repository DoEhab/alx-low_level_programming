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

typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
