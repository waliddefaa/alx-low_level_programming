#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of all its parameters
 * @n: input
 * Return: result
 */



int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int result = 0;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(valist, int);
	}

	va_end(valist);

	return (result);
}
