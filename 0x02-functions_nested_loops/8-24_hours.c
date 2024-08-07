#include <stdio.h>
#include "main.h"

/**
  * jack_bauer - Entry point
  *
  * Description: 'print the time every hour'
  * Return: no return value
  */

void jack_bauer(void)
{
	int hours_counter = 0;
	int minutes_counter = 0;

	while (hours_counter < 24)
	{
		while (minutes_counter < 60)
		{
			if (hours_counter < 10)
				printf("0%d:", hours_counter);
			else
				printf("%d:", hours_counter);
			if (minutes_counter < 10)
				printf("0%d", minutes_counter);
			else
				printf("%d", minutes_counter);

			printf("\n");
			minutes_counter++;
		}
		hours_counter++;
		minutes_counter = 0;
	}

}

