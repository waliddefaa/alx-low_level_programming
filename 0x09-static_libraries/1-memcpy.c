#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: input
 * @src: input
 * @n: input
 * Return: pointer to dest
 */



char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i;

	for (i = n; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
