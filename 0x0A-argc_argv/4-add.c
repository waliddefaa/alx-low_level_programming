#include <stdio.h>
#include <stdlib.h>





/**
 * _res - checking
 * @s: checked input
 * Return: s
 */

int _res(char s)
{
	return (s >= '0' && s <= '9');
}






/**
 * main - adds two positive numbers
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, x, result = 0;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
		{
			if (!_res(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
