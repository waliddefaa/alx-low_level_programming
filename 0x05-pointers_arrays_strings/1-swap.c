#include "main.h"

/**
 * swap_int - swaps the values of the two integers
 * @a: 1st pointer
 * @b: 2nd pointer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
