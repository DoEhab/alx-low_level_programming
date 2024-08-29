#include "main.h"
#include <stddef.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *arr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return NULL;

	arr = mem;

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = '\0';

	return (mem);
}
