#include "main.h"
#include <ctype.h>

char *string_toupper(char *s)
{
	char *temp = s;
	while(*temp)
	{
		*temp = toupper(*temp);
		temp++;
	}
	return s;
}
