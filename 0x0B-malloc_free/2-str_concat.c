#include "main.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: NULL on failure
 */





char *str_concat(char *s1, char *s2)
{
	int a, b, i, i2, i3;
	char *output;

	i = i2 = 0;

	if (s1 != NULL)

	{
		a = 0;
		while (s1[a++] != '\0')
			i++;
	}

	if (s2 != NULL)

	{
		a = 0;
		while (s2[a++] != '\0')
			i2++;
	}

	i3 = i + i2;

	output = (char *)malloc(sizeof(char) * (i3 + 1));

	if (output == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		output[a] = s1[a];

	for (b = 0; b < i2; b++, a++)
		output[i] = s2[b];
	output[i3] = '\0';

	return (output);
}
