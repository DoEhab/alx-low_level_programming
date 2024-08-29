#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - returns pointer to allocated memory
  *
  * @b: size to be allocated
  * Return: void pointer
  */

void *malloc_checked(unsigned int b)
{
	void *result = malloc(b);

	if (result == NULL)
		exit(98);

	return (result);
}
