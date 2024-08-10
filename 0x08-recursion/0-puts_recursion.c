#include "main.h"

/**
  * _puts_recursion - print a char with recursion
  *
  * @s: pointer to char array
  * Return: No return value
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
