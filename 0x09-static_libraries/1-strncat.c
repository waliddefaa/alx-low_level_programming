#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: input
 * @src: input
 * @n: bytes value
 * Return: resulting string dest
 */




char *_strncat(char *dest, char *src, int n)
{


	int a = 0, b = 0;



	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b < n)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}

