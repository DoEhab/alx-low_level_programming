#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenate 2 strings
  *
  * @s1: first char array
  * @s2: second char array
  * Return: pointer to concatenated char array
  */

char *str_concat(char *s1, char *s2)
{
	int len_1 = 0;
	int len_2 = 0;
	int i;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len_1++;

	for (i = 0 ; s2[i]; i++)
		len_2++;

	result = malloc(sizeof(char) * (len_1 + len_2 + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		result[i] = s1[i];

	for (i = 0; i < len_2; i++)
		result[len_1 + i] = s2[i];

	return (result);
}
