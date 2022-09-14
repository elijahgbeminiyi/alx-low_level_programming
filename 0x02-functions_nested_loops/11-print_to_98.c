#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - adds two numbers
 * @n: takes the number
 *
 * Return: returns the addition
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
