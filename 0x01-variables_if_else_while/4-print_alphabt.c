#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'print last digit'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
        char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
        
	for (i = 0; i < 26; i++)
	{
		if (alphabet[i]!='q' && alphabet[i] != 'e')
			putchar(alphabet[i]);
        }
	putchar('\n');
	return (0);
}
