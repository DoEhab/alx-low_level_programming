#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _strdup - copies data from one pointer to another
  *
  * @str: pointer to copy the data from
  * Return: new pointer with duplicate data
  */

char *_strdup(char *str)
{
	int len, index = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	new_str = malloc(sizeof(char) * len);

	if (new_str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		new_str[index] = str[index];

	new_str[len] = '\0';
	return (new_str);
}
