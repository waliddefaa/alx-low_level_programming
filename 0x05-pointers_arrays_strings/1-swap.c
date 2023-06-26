#include "main.h"

/**
 * swap_int - swaps the value of the two integers.
 * @a: 1st int.
 * @b: 2nd int.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
