#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input
 * @f: the func
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		f(name);
}
