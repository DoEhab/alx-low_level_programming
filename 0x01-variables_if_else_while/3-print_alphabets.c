#include <stdio.h>

int main(void){

	int i;

	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(i = 0; i < 56; i++){
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
