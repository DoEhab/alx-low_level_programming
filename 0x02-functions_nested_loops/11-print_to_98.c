#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - print numbers starting n to 98
  *
  * @n: the starting number
  * Return: No return value
  */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	printf("%d \n", i);
	}
	else
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);

	printf("%d \n", i);
	}
}
