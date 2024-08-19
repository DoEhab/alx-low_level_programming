#include "main.h"
#include <stdio.h>

/**
  * print_sign - prints the sign of a number
  *
  * Description: 'print signs'
  * @n: the number to be used
  * Return: -1 for negative numbers, 1 for positive and 0 for zer
  */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
