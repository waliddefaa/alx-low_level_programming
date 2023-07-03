#include "main.h"
#include <stdio.h>
/**
 *  _strchr - locates a character in a string
 *  @s: input
 *  @c: input
 *  Return: pointer to the first occurrence
 */




char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{

		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
