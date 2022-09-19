#include "main.h"

/**
 * puts2 - Prints a string
 * @str: parameter string
 *
 * Return: Function is void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		else if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
}
