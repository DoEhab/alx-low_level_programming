#include "main.h"
#include <stdio.h>

void print_alphabet_x10(void)
{
	int x = 0;
	char letter;

	while(x < 10){
		for(letter = 'a'; letter<='z'; letter++)
			_putchar(letter);

		x++;
		_putchar('\n');
	}
}
