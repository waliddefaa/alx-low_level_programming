#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: the length
 */


int _strlen(char *s)
{
	int i;
	int l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}
