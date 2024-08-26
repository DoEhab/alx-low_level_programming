#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines dog specs
 * @name: dog name
 * @age: dog age
 * @owner: dog age
 *
 * Description: struct to define dog name, age, owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
