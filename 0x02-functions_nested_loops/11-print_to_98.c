#include "main.h"

/**
 * print_to_98 - adds two numbers
 * @n: takes the number 
 *
 * Return: returns the addition
 */

int print_to_98(int n)
{
	while (n > 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
	while (n < 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	if (n == 98)
	{
		_putchar(n + '0');
	}
	return (0);
}
