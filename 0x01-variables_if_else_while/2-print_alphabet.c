#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'print alphabet'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
		putchar(alphabet[i]);

	putchar('\n');
	return (0);
}
