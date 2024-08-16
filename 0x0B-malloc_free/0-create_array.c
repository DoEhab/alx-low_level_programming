#include "main.h"
#include <stdlib.h>

/**
  * *create_array: creates array of char
  *
  * Description: 'create an array of char and initializes it with char'
  * @size: size of array
  * @c: char to be initialize the array
  * Return: pointer to char array
  */

char *create_array(unsigned int size, char c)
{
	char *result = malloc(size * (sizeof(c)));
	unsigned int i;

	if (result == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		result[i] = c;

	return (result);
}
