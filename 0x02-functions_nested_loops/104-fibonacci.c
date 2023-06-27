#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */



int main(void)
{
	int i;
	unsigned int a, b, c;

	a = 1;
	b = 2;

	printf("%u, %u, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf("%u", c);

		if (i < 98)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
