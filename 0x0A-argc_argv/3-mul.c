#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * @argc: argument count
  * @argv: argument value
  * Return: 1 (Failure) 0 (Success)
  */

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = atoi(argv[argc - 2]);
		int y = atoi(argv[argc - 1]);

		printf("%d\n", x * y);
	}
	return (0);
}
