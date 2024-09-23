#include "main.h"
#include <string.h>

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = strlen(dest);
	int src_len = strlen(src);
	while(i < src_len)
	{
	       	dest[len+i] = src[i] ;
		i++;
	}
	return dest;
}
