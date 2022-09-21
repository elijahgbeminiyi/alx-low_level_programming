#include "main.h"

/**
 * print_square - prints square stuff
 * @size: integer to set square size
 * i: stores a value
 * j: stores any value
 *
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
