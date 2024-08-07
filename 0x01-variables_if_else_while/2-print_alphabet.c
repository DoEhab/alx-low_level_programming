#include <stdio.h>
#include <stdlib.h>

/**
  6  * main - Entry point
  7  *
  8  * Description: 'print alphabet'
  9  * Return: Always 0 (Success)
 10  */

int main(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
		putchar(alphabet[i]);

	putchar('\n');
	return (0);
}
