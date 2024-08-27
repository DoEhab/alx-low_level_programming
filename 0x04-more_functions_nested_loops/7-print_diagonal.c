#include "main.h"

/**
  * print_diagonal - print diagonal
  *
  * @n: lenght of diagonal
  * Return: void
  */

void print_diagonal(int n)
{
	int i;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (space = 0; space < i; space++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
