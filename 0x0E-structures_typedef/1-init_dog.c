#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * init_dog - Starts the dog structure
 * @d: Structure of the dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
	d = malloc(sizeof(struct dog));

	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
