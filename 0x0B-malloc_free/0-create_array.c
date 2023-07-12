#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: input
 * @c: input
 * Return: NULL if size = 0
 */




char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int x;

	if (size == 0)
		return (NULL);

	i = malloc(size * sizeof(*i));
	if (i == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		i[x] = c;

	return (i);
}
