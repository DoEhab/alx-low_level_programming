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
	unsigned int len_2 = 0;
	int result_index = 0;
	char *result;

	for (i = 0; s1[i]; i++)
		len++;

	for (i = 0; s2[i]; i++)
		len_2++;

	if (n >= len_2)
		return (s2);

	result = malloc((sizeof(char) * (len + n + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		result[result_index++] = s1[i];

	for (i = 0; i < n; i++)
		result[result_index++] = s2[i];

	return (result);
}
