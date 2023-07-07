#include <stdio.h>
#include <stdlib.h>



/**
 * main - prints the minimum number of coins
 * @argc: input 0
 * @argv: input 1
 * Return: 0
 */




int main(int argc, char *argv[])

{
	int i = 0, x;

	if (argc != 2)

	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	if (x < 0)

	{
		printf("0\n");
		return (0);
	}

	i += x / 25;
	x %= 25;

	i += x / 10;
	x %= 10;

	i += x / 5;
	x %= 5;

	i += x / 2;
	x %= 2;

	i += x;

	printf("%d\n", i);

	return (0);
}
