#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes the struct dog structure
 * @d: dog variable container.
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
