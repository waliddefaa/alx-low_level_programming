#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: NULL on failure
 */





int **alloc_grid(int width, int height)

{
	int **a;
	int b, c;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);


	a = malloc(height * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (b = 0; b < height; b++)

	{
		a[b] = malloc(width * sizeof(**a));
		if (a[b] == NULL)

		{
			for (b--; b >= 0; b--)
				free(a[b]);
			free(a);
			return (NULL);
		}

		for (c = 0; c < width; c++)
			a[b][c] = 0;
	}

	return (a);
}
