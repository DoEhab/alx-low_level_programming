#include "main.h"
#include <ctype.h>

/**
  * _isdigit - check if the received input is digit
  *
  * @c: the input to be checked
  * Return: return 1 if is digit and zero if not
  */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);

}
