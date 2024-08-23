#include "main.h"
#include <stdio.h>

/**
  * times_table - print the times table
  *
  * Description: 'print times table'
  * Return: No return value§
  */

void times_table(void)
{
	int i;
	int j;
	int result = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;

			if (result < 10)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
