#include "main.h"
#include <stdio.h>

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	printf("%d", last_digit);
	return(last_digit);

}
