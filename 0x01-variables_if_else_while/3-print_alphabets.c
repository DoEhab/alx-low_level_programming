#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print alphabet in lower and upper case'
 * Return: Always 0 (Success)
 */

int main(void){

	int i;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	for (i = 0; i < 52; i++)
		putchar(alphabets[i]);
	
	putchar('\n');
	return (0);
}
