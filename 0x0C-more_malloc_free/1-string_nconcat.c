#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: input
 * @s2: input
 * @n: input
 * Return: seccess
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, x, z = 0, f = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[z] != '\0')
	{
		z++;
	}
	while (s2[f] != '\0' && f < n)
	{
		f++;
	}

	x = z + f;
	p = (char *) malloc(x + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < z; a++)
	{
		p[a] = s1[a];
	}
	for (b = 0; b < f; b++, a++)
	{
		p[a] = s2[b];
	}
	p[a] = '\0';

	return (p);
}
