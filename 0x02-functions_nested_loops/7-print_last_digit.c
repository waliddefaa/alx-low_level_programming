#include"main.h"

/**
 * print_last_digit - Write the last digit of num.
 * @n: The num that will be treated.
 * Return: Value of the last digit.
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
