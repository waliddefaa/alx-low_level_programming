#include <stdio.h>

/**
 * main - Enrty point of the program
 *
 * Description:  a program that prints the alphabet in lowercase and uppercase
 *
 * Return: 0 ending point
 */

int main(void)

{
	int i = 97;
	int z = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	while (z <= 90)
	{
		putchar(z);
		z++;
	}

	putchar('\n');

	return (0);
}
