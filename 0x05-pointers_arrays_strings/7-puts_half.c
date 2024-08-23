#include "main.h"
#include <stdio.h>

/**
  * puts_half - print second half
  *
  * Description: 'print the second half of string'
  * @str: pointer to the string
  * Return: void
  */

void puts_half(char *str)
{
	int i;
	int len = 0;
	int start_index = 0;

	for (i = 0; str[i]; i++)
		len++;

	if ((len / 2) % 2 == 0)
		start_index = len / 2;
	else
		start_index = ((len + 1) / 2) - 1;
	
	for (i = start_index ; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
