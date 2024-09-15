#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t list_num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		list_num += 1;
	}

	return list_num;
}
