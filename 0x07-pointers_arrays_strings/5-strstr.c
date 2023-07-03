#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: pointer to the beginning
 */






char  *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);


	while (*haystack)
	{
		a = 0;

		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
					return (haystack);
				a++;
			} while (haystack[a] == needle[a]);
		}
		haystack++;
	}
	return ('\0');
}
