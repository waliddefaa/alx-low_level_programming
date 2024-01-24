#include "function_pointers.h"



/**
 * int_index - searches for an integer
 * @array: input
 * @size: input
 * @cmp: ptr to func
 * Return: index of the first eement for which the cmp
 * func does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */



int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (a = 0; a < size; a++)

			if (cmp(array[a]))
			{
				return (a);
			}
	}

	return (-1);
}
