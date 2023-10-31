#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * argstostr - concatenates all the arguments of program
 * @ac: count of args
 * @av: pointer
 * Return: pointer to a new string, or NULL if it fails
 */


char *argstostr(int ac, char **av)
{
	char *z;
	int x = 0, i = 0, a, k = 0;

	if (av == 0 || ac == 0)
		return (0);
	while (i < ac)
	{
		a = 0;
		while (av[i][a] != 0)
			x++, a++;
		x++, i++;
	}
	x++;
	z = (char *)malloc(sizeof(char) * x);
	if (z == 0)
	{
		free(z);
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		a = 0;
		while (av[i][a] != 0)
			z[k] = av[i][a], a++, k++;
		z[k] = '\n', k++, i++;
	}
	z[k] = 0;
	return (z);
}
