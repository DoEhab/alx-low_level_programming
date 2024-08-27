#include "main.h"

/**
  * print_line - print line
  *
  * Description: 'print line using putchar'
  * @n: the lenght of _
  * Return: void
  */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
