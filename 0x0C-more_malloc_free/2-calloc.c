#include "main.h"


/**
 * _calloc -  allocates memory for an array
 * @nmemb: input
 * @size: input
 * Return: pointer
 */



void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *a;
	void *p;
	unsigned int un;

	if (nmemb == 0 || size == 0)

	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)

	{
		return (NULL);
	}

	a = p;
	for (un = 0; un < nmemb * size; un++)
	{
		a[un] = 0;
	}
	return (p);
}

