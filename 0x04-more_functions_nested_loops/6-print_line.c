#include "main.h"

/**
 * print_line - prints a line
 * @n: it takes the number of times the line is printed
 * i: stores the iteration count
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
