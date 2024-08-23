#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - allocate new memory for concatenated pointer
  *
  * @s1: first string
  * @s2: second string
  * @n: length on char to be contcatenated from s2
  * Return: contactnated char pointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len = 0;
	int result_index = 0;
	char *result;

	for (i = 0; s1[i]; i++)
		len++;

	result = malloc((len + n) * sizeof(char));

	for (i = 0; s1[i]; i++)
		result[result_index++] = s1[i];

	for (i = 0; i < n; i++)
		result[result_index++] = s2[i];

	return (result);
}