#include "main.h"

/**
  * _pow_recursion - calcluate the number raised to power
  *
  * @x: the number
  * @y: the power
  * Return: the result of number raised to power
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
