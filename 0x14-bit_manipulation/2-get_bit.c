#include "main.h"

/**
  * get_bit - specifies whether the value is 0 or 1
  *
  * @n: the number in decimal
  * @index: the index to get the value for
  * Return: return the binary value of index
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * n))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
