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
	char letter;

	for (i = 0; i < 10; i++)
		putchar('0' + i);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);


	putchar('\n');
	return (0);

}
