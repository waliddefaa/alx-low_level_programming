#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: 0 (success)
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b >= 0)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}
