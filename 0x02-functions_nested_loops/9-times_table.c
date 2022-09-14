#include "main.h"

/**
 * times_table - description here
 * i: saves interger 1
 * j: saves integer 2
 *
 * Return: returns 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int mul = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (mul < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

