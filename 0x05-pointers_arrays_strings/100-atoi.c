#include "main.h"

/**
 * _atoi - conv string to int
 * @s:  string tobe converted
 * Return: the string
 */


int _atoi(char *s)
{
	short all;
	int i, less, end;

	i = less = end = all = 0;
	less = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			less *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			end *= 10;
			end -= (s[i] - '0');
			all = 1;
		}
		else if (all == 1)
			break;
		i++;
	}
	end *= less;
	return (end);
}
