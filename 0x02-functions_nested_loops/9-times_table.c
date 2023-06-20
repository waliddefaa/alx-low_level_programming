#include "main.h"

/**
 * times_table - writes the 9 times table, strating from 0
**/

void times_table(void)
{
	int i, c, k;

	for (i = 0; i <= 9; i++)
	{

		for (c = 0; c <= 9; c++)
		{
			k = i * c;

			if (k <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');

			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
