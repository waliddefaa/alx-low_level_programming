#include"main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character that will be checked
 * Return: 1 for lower or 0 for else.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
