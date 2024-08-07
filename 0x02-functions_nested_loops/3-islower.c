#include "main.h"
#include <ctype.h>

/**
  * _islower - return if lower case digit
  *
  * @c; char to be checked
  * Return: 1 if lower case and zero if not
  */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
