#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);

	for (i = 0; i < width; i++)
		for (j = 0; i < height; i++)
			arr[i][j] = 0;

	return arr;
}
