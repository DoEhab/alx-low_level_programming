#include "main.h"

/**
  * clear_bit - set the bit at certain index to 0
  *
  * @n: the decimal numer
  * @index: the index to be changed to 0
  * Return: 1 onsuccess -1 on failure
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
