#include "variadic_functions.h"



/**
 * print_all - prints anything.
 * @format: inputs
 */



void print_all(const char * const format, ...)

{
	va_list valist;
	const char t_arg[] = "cifs";
	char *a;
	unsigned int i = 0, x, c = 0;

	va_start(valist, format);
	while (format && format[i])
	{
		x = 0;
		while (t_arg[x])
		{
			if (format[i] == t_arg[x] && c)
			{
				printf(", ");
				break;
			}
			       	x++;
		}
		switch (format[i])
		{
			case 'c':
				{
				printf("%c", va_arg(valist, int)), c = 1;
				break;
				}
			case 'i':
				{
				printf("%d", va_arg(valist, int)), c = 1;
				break;
				}

			case 'f':
				{
				printf("%f", va_arg(valist, double)), c = 1;
				break;
				}
			case 's':
				{
				a = va_arg(valist, char *), c = 1;
				if (!a)
				{
					printf("(nil)");
					break;
				}
				printf("%s", a);
				break;
				}
		} i++;
	}
	printf("\n"), va_end(valist);
}
