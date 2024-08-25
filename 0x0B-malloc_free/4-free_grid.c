#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees memory based on received params
  *
  * @grid: 2d array
  * @height: array size
  * Return: Always 0 (Success)
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
