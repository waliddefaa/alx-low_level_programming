#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * main - check the code for Holberton School students
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */



int main(int argc, char *argv[])
{
	int a, b, c;
	int (*i)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);

	b = atoi(argv[3]);

	i = get_op_func(argv[2]);

	if (i == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = i(a, b);
	printf("%d\n", c);
	return (0);
}
