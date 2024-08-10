#include "main.h"

/**
  * _strlen_recursion - calculate the length of string
  *
  * @s: pointer to char array
  * Return: length of string
  */

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		counter = counter + 1;
		counter = counter + _strlen_recursion(s + 1);
	}
	return (counter);
}
