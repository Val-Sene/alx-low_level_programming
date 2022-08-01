#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes the struct
 * @d: struct name
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: no return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
