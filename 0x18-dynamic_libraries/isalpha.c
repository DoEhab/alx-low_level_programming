#include "main.h"
#include <ctype.h>

/**
  * _isalpha - check alphabet
  *
  * @c: char to be checked
  * Return: 1 if char and 0 if not
  */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}