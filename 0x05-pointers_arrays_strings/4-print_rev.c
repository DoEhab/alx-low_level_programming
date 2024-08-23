#include "main.h"
#include <string.h>

/**
  * print_rev - print the string in reverse order
  *
  * @s: pointer to char array
  * Return: No return value
  */

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(' ');
}
