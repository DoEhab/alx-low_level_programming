#include "main.h"

/**
  * _memcpy - copy data from src arr to dest arr
  *
  * @dest: result
  * @src: source array
  * @n: size
  * Return: destination array
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
