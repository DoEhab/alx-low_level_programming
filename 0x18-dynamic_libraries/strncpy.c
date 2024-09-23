#include "main.h"
#include <string.h>

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	int dest_len = strlen(dest);
	int src_len = strlen(src);

	while(i < n && i < src_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return dest;
}
