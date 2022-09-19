#include "main.h"

/**
 * print_rev - Prints reverse string
 * @s: parameter variable
 *
 * Return: A void function
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[-i]);
	}
}
