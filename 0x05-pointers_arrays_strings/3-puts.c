#include "main.h"

/**
 * _puts - Prints a string
 * @str: parameter string
 *
 * Return: Function is void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] == true; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
		}
		_putchar(str[i]);
	}
}
