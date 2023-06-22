#include "main.h"

/**
 * _isupper - checking for uppercase characters
 * @c: the char that will be ckecked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
