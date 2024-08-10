#include "main.h"

/**
  * factorial - calulates factorial
  *
  * @n: the number to calculate factorial for
  * Return: integer number factorial result
  */

int factorial(int n)
{
	int result = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);

	result = n * factorial(n - 1);

	return (result);
}
