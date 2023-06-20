#include"main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The nums that wil be computed.
 * Return: Abs value of the number or zero.
 */



int _abs(int c)
{
	if (c > 0)
	{
		int i;

		i = c * -1;
		return (i);
	}
	return (c);
}
