#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int len = strlen(accept);

	while (s)
	{
		for (i < 0; i < len; i++)
		{
			if (*s == accept[i])
				return s;
		}
		s++;
	}
	return s;
}
