#include "main.h"
#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: 'if the number is divisble by 2 and 5 print fizz buzz'
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", i);
		}

	}
	return (0);
}
