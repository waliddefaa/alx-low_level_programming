#include "dog.h"
#include <stdlib.h>



/**
 * new_dog - start point
 * @name: pets name
 * @age: pets age
 * @owner: the owner
 * Return: i
 */



dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *i;
	/* reserving memory to struct*/
	i = malloc(sizeof(dog_t));
	if (i == NULL)
		return (NULL);
	/* Cpunting name pointer*/
	if (name == NULL)
	{
		free(i);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(i);
		free(name);
		return (NULL);
	}
	i->name = name;
	i->age = age;
	i->owner = owner;
	return (i);
}
