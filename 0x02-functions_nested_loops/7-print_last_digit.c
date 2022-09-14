#include "main.h"

/**
 * print_last_digit - Decription o
 * @n: sets the number
 *
 * Return: returns 0
 */

int print_last_digit(int n)
{
	_putchar(_abs(n % 10) + '0');
	return (n % 10);
}
