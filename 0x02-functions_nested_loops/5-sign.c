#include"main.h"

/**
 * print_sign - Write the sign of number
 * @n: The number that will be checked
 * Return: 1 for the positive num and -1 for negative num or 0 for else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
