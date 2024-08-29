#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;

	for (i = 0; i < size; i++)
{
		printf("%d \n", a[i]);
		a+=size;
}
}
