#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: input
 * Return: NULL if str = NULL
 */





char *_strdup(char *str)
{
	char *x;
	int a, j = 0;

	if (str == NULL)
		return (NULL);


	for (a = 0; str[a]; a++)
		j++;

	x = malloc(sizeof(char) * (j + 1));


	if (x == NULL)
		return (NULL);


	for (a = 0; str[a]; a++)
		x[a] = str[a];

	x[j] = '\0';

	return (x);
}

