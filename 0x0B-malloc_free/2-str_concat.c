#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int len_1, len_2 = 0;
	int i;
	char *result;

	for (i = 0; s1[i]; i++)
		len_1++;

	for (i = 0 ; s2[i]; i++)
		len_2++;

	result = malloc((len_1 + len_2) * sizeof(char));

	for (i = 0; i < len_1; i++)
		result[i] = s1[i];

	for (i = 0; i < len_2; i++)
		result[len_1 + i] = s2[i];

	return result;
}
