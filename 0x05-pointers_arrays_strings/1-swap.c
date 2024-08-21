#include "main.h"

/**
  * swap_int - swap integers
  *
  * @a: first number
  * @b: second number
  * Return: No return value
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

