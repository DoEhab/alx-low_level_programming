#include "main.h"

/**
  * flip_bits - compare the bit difference between 2 ints
  *
  * @n: first decimal number
  * @m: second base 10 number
  * Return: bits difference in int
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_flip = n ^ m;
	unsigned int result = 0;

	while (bit_flip > 0)
	{
		result = result + (bit_flip & 1);
		bit_flip = bit_flip >> 1;
	}
	return (result);
}
