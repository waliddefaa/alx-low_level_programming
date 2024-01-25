
#include "variadic_functions.h"


/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *str;
	unsigned int a;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(valist, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
