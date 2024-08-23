#include "main.h"
#include <stdio.h>

/**
  * print_last_digit - return last digit of number
  *
  * @num: the number to print last digit of
  * Return: last digit of number
  */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;
	_putchar(last_digit + '0');
	return (last_digit);

}
