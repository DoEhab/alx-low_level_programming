#include "main.h"

void print_diagonal(int n)
{
	int i;
	int space;

	for(i = 0; i < n; i++)
	{
		for(space = 0; space < i; space++){
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
