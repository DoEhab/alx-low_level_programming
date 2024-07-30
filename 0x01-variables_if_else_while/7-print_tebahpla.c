#include <stdio.h>

int main (void)
{
	int i;

	char alphabt[] = "abcdfghijklmnoprstuvwxyz";
	for (i = 24; i >= 0; i--)
		putchar(alphabt[i]);

	putchar('\n');
	return (0);
}
