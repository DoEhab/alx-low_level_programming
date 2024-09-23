#include "main.h"

/**
  * _strcpy - copies the data from src to dest
  *
  * @dest: pointer to the copied value
  * @src: pointer to the src value to be copied
  * Return: return dest pointer
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
