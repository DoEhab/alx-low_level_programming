#include "main.h"
#include <stddef.h>

char *_strchr(char *s, char c)
{	
	char *result = NULL;

	while (s)
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	return result;
}
