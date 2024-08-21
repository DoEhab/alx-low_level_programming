#include "main.h"
#include <string.h>

void puts2(char *str)
{
	 int len = strlen(str);
	 int i = 0;

	 while(i < len-1)
	 {
		 _putchar(str[i]);
		 i = i+2;
	 }
	 

}
