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

	char alphabt[] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 25; i >= 0; i--)
		putchar(alphabt[i]);

	putchar('\n');
	return (0);
}
