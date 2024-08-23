#include "main.h"
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = strlen(dest);
	int src_len = strlen(src);

	while(i < n && i < src_len)
	{
		dest[len + i] = src[i];
		i++;
	}
	return dest;
	
}

