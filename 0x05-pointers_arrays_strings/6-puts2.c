#include "main.h"
#include <string.h>

/**
  * puts2 - prints array and skips chars
  *
  * @str: char array
  * Return: No return value
  */

void puts2(char *str)
{
	int len = strlen(str);
	int i = 0;

	while (i < len - 1)
	{
		 _putchar(str[i]);
		i = i + 2;
	}
}
