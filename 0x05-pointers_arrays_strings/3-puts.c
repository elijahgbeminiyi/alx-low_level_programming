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
	char str = *str;
	int len = _strlen(str);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
		}
		_putchar(str[i]);
	}
}
