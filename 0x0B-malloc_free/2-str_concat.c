#include "main.h"
#include <stdlib.h>

/**
 * str_concat - pointer to a 2 dimensional array of integers
 * @s1: input
 * @s2: input
 * Return: NULL on failure
 */


char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int a = 0, b = 0, x = 0, z = 0;

	if (s1 == NULL)
	{
		s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}
		while (s1[a] != '\0')
		{
			a++;
		}
		while (s2[b] != '\0')
		{
			b++;
		}

		concatenated = malloc((a + b + 1) * sizeof(char));

		if (concatenated == NULL)
		{
			return (NULL);
		}
		for (x = 0; x < a; x++)
		{
			concatenated[x] = s1[x];
		}
		for (z = 0; z < b; z++)
		{
			concatenated[x + z] = s2[z];
		}
		concatenated[a + b] = '\0';

		return (concatenated);
}
