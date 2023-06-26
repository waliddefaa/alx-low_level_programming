#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: the length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
	}

	return (i);
}
