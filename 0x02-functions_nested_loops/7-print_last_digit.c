#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - Decription o
 * @n: sets the number
 *
 * Return: returns 0
 */

int print_last_digit(int n)
{
	_putchar(_abs(n % 10) + '0');
	return (_abs(n % 10));
}
