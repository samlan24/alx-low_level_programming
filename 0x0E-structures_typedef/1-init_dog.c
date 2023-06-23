#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - holds dog details
 * @d: pointer
 * @name: dog's name
 * @age: age of dog to initialize
 * @owner: owner's name to initialize
 *
 * Description: no description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
