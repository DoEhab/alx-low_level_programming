#include "main.h"
#include <stdio.h>

/**
  * is_divisible - recursive function to check if the
  * number is divisble by itself only
  *
  * @n: the number to checked
  * @i: the divisible by number
  * Return: return 1 if prime and 0 if not
  */

int is_divisible(int n, int i)
{
	if (i >= n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	i = i + 1;
	return (is_divisible(n, i));
}

/**
  * is_prime_number - check if it is prime number
  *
  * @n: the number to checked
  * Return: return 1 if prime and 0 if not
  */

int is_prime_number(int n)
{
	int i = 2;
	int result;

	if (n == 0 || n == 1 || n < 0)
		return (0);

	result = is_divisible(n, i);
	return (result);
}
