#include "main.h"
#include <ctype.h>
#include <string.h>

char *cap_string(char *s)
{
	int len = strlen(s);
	int i = 0;

       	while(i < len)
       	{
		if(s[i] == ' ' || s[i] == '.' || s[i] == '\\' || s[i] == '\n' || s[i] =='	')
			s[i+1] = toupper(s[i+1]);
		
		i++;

       	}	
	return s;	
}
