#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *result;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min;
	result = malloc(max * sizeof(int));
	for (i = 0; i < len; i++)
		result[i] = min + i;

	return result; 
}
