#include "main.h"

/**
* *_memest - fills the first n bytes
*
* @s: the pointer
* @b: char to be added in the array
* @n: the length
*
* return: the char pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;

}
