#include <stdio.h>

/**
 * main - prints largest prime factor of the number 612852475143.
 * Return: 0 Always
 */

int main(void)
{
	long int input, x;

	input = 612852475143;
	for (x = 2; x <= input; x++)
	{
		if (input % x == 0)
		{
			input /= x;
			x--;
		}
	}
	printf("%ld\n", x);
	return (0);
}
