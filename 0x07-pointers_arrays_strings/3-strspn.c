#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: number of bytes in the initial segment
 */




unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == *s)
			{
				i++;
				break;
			}

			else if ((accept[x + 1]) == '\0')
				return (i);
		}
		s++;
	}

	return (i);
}
