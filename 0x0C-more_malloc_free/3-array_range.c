#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: input
 * @max: input
 * Return: Pointer to the newly created array
 */





int *array_range(int min, int max)
{
	int *a, b, c;

	if (min > max)

	{
		return (NULL);
	}

	b = max - min + 1;

	a = malloc(b * sizeof(int));

	if (a == NULL)

	{
		return (NULL);
	}

	for (c = 0; c < b; c++)

	{
		a[c] = min + c;
	}

	return (a);
}
