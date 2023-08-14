#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - type of struct dog
 * @d: pointer
 * @name: name of dog
 * @age: dog age
 * @owner: member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
