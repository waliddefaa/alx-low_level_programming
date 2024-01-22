#include "dog.h"


/**
 * init_dog - initializes the variable dog struct
 * @d: ptr to struct dog
 * @name: input name
 * @age: input age
 * @owner: input owner
 */


void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
