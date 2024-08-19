#include "main.h"
#include <stdio.h>

int is_prime_number(int n)
{
	printf("%d \n", n);
	if (n == 1)
		return 1;
	if (n < 1)
		return 0;
	return is_prime_number(n/2);
	
}
