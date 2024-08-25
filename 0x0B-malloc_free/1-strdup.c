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
	int len = 0;
	int i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[len] = '\0';
	return (new_str);
}
