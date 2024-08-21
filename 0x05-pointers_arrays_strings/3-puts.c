#include "main.h"
#include <stdio.h>

/**
  * puts - prints a string
  *
  * @str: pointer to the array to be printed
  * Return: no return value
  */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
}
