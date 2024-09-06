#include "main.h"

/**
  * print_binary - print the binary of decimal number
  *
  * @n: base 10 number
  * Return: void
  */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
