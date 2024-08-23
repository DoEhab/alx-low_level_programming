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

	for (i = 0; str[i]; i++)
		len++;

	for (i = (len / 2); i < len; i++)
		printf("%c", str[i]);

	printf("\n");
}
