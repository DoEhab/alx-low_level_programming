#include "main.h"
#include <stdio.h>

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		num = num * -1;
	last_digit = num % 10;
	_putchar(last_digit + '0');
	return(last_digit);

}
