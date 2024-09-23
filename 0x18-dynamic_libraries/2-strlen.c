#include "main.h"
#include <string.h>

/**
  * _strlen - return string lenght
  *
  * @s: pointer to char array
  * Return: return lenght of char array
  */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}
