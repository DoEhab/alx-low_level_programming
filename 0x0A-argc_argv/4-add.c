#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
  * main - print the sum of args
  *
  * @argc: arguments count
  * @argv: areguments value
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("%d \n", 0);
	}
	else
	{
		int i;
		int sum = 0;

		for (i = 0; i < argc; i++)
		{
			int val = atoi(argv[i]);

			if (isdigit(val))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += val;
			}
		}

		printf("%d\n", sum);
	}
	return (0);
}
