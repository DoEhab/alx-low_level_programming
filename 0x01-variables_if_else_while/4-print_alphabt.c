#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int i;

        char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
        for(i = 0; i < 26; i++){
		if (alphabet[i]!='q' && alphabet[i]!='e')
                	putchar(alphabet[i]);
        }
        putchar('\n');
        return (0);
}
