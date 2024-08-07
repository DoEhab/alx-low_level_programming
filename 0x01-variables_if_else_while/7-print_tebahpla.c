#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print last digit'
 * Return: Always 0 (Success)
 */

int main (void)
{
	int i;

	char alphabt[] = "abcdfghijklmnoprstuvwxyz\n";
	for (i = 24; i >= 0; i--)
		putchar(alphabt[i]);

	return (0);
}
