#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: input 1
 * @s2: input 2
 * Return: 0 if conditions are true
 */





int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0;

	while (x == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		x = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (x);
}
