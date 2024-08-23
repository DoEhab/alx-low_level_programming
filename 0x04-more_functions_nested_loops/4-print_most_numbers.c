#include "main.h"

/**
  * print_most_numbers - prints number skipping 4 and 2
  *
  * Description: 'prints numbers except 4 and 2'
  * Return: void
  */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '4' && i != '2')
			_putchar(i);
	}
	_putchar('\n');
}
