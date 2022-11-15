#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializing a struct
 * @d: name of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: 0 Always success
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
