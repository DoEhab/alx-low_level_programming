#include <stdio.h>

int main (void){
	int i;
	char letter;

	for (i = 0; i < 10; i++)
		putchar('0'+i);

	for (letter = 'a'; letter <= 'f'; letter++)
       		putchar(letter);


	putchar('\n');
	return (0);

}
