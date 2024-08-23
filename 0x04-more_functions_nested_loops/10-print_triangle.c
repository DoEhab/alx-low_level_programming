#include "main.h"

/**
  * print_triangle - print a triangle based on the received size
  *
  * @size: size of printing triangle
  * Return: void
  */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(' ');

		}
		_putchar('#');
	}
}
