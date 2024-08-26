#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
  * print_dog - prints dog data
  *
  * @d: struct dog
  * Return: void
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("name: nil\n");
		else
			printf("name: %s\n", d->name);
		if (d->age < 0)
			printf("age : nil\n");
		else
			printf("age: %f\n", d->age);
		if (d->owner == NULL)
			printf("owner: nil\n");
		else
			printf("owner: %s\n", d->owner);
	}
	else
		printf("nil");
}
