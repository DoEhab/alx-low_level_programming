#include "main.h"
#include <ctype.h>

/**
  * _isupper - check if the letter is upper case
  *
  * @c: the letter to be checked
  * Return: return 1 if true and zero if false
  */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
