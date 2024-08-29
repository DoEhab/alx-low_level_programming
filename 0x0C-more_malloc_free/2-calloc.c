#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *arr;
	int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return NULL;

	arr = mem;
	if (i = 0; i < nmemb * size; i++)
		arr[i] = '\0';

	return (mem);
}
