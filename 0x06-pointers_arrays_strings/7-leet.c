#include "main.h"

char *leet(char *str)
{
	int i= 0;
	int x;
	char leet[8] = {'o','l','?','e','a','?','?','t'};

	while(str[i])
	{
		for(x = 0; x < 7; x++){
			if(str[i] == leet[x] || str[i] == leet[x]-32)
			{
				str[i] = x + '0';
			}
		}
		i++;
	}
	return str;

}
