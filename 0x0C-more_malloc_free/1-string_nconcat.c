#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: input
 * @s2: input
 * @n: input
 * Return: if it fails return NULL
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c;
	char *x;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	if (n >= b)
		n = b;
	x = malloc(sizeof(char) * n + a + 1);
	if (x == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		x[c] = s1[i];

	for (c = 0; c < n; c++)
		x[c + a] = s2[c];

	x[c + a] = '\0';

	return (x);
}
