#include "main.h"

/**
* _puts_recursion - This function prints a string
* @s: string parameter
*/

void _puts_recursion(char *s)
{
	/* Checks if the string parameter is empty */
	if (*s == '\0')
	{
		/* prints out a new line */
		_putchar('\n');
		return;		/* breaks out of the function */
	}
	_putchar(*s);	/* prints first character */
	s++;			/* increment the address of the first element */
	_puts_recursion(s);	/* recall the function */
}
