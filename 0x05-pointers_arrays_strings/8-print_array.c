#include "main.h"
#include <stdio.h>

/**
  * print_array - prints an array based on a given lenght
  *
  * @a: pointer to the array
  * @n: lenght to be printed
  * Return: void
  */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d", a[i]);
	}
	printf("\n");
}
