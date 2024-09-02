#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - print numbers separated
  *
  * @separator: separator char between nums
  * @n: number of args
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int result;

	va_start(args, n);
	for (; i < n; i++)
	{
		result = va_arg(args, int);
		printf("%d", result);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
