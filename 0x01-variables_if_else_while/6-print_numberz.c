#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print last digit'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);

	putchar('\n');
	return (0);
}
