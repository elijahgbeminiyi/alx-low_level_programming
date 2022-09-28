#include "main.h"

/**
* _print_rev_recursion - This function prints a string in reverse
* @s: string parameter
*/

void _print_rev_recursion(char *s)
{
	/* check if the string is null */
	if (*s == '\0')
	{
		return;
	}
	s++;	/* increment the address of the first indes */
	_print_rev_recursion(s);	/* recall the funtion till it is null */
	s--;	/* when function is null, the index decrements by 1 */
	_putchar(*s);	/* prints the value of *s */
}
