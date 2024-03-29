#include<stdio.h>
#include<stdlib.h>


/**
 * main - prints the opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, x;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < x; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i != x - 1)
			printf(" ");

	}
	printf("\n");
	return (0);
}
