#include "main.h"

/**
  * set_bit - set bit at a given index to 1
  *
  * @n: decimal number
  * @index: the indext to be set to 1
  * Return: 1 on success, -1 on failure
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n ^ (1 << index);

	return (1);
}
