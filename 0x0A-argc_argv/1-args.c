#include <stdio.h>

/**
  * main - Entry point
  *
  * @argc: arguments count
  * @argv: arguments value
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
