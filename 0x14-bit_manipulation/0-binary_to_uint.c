#include "main.h"
#include <stddef.h>
#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
	int i;
	int power_two = 1;
	unsigned int result = 0;
	int len;

	if (b == NULL)
		return (0);
	
	for (len = 0; b[len];)
		len++;

	i = len;
	for (i -=1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{	int bit = b[i] - '0';
			result += bit * power_two;
			power_two = power_two * 2; 
		}
		else
			return (0);
	}

	return (result);
}
