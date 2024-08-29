#include "main.h"
#include <stddef.h>

/**
  * _strchr - return string based on first appearance of char
  *
  * @s: char array
  * @c: char to check
  * Return: null if char not found and array if found
  */

char *_strchr(char *s, char c)
{
	char *result = NULL;
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}

	return (result);
}
