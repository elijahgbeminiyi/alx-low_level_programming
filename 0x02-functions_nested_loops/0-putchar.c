#include "main.h"

/**
 * main - This functions print a simple string
 *
 * Return: it returns 0
 */

int main(void)
{
	char c[8] = "_putchar";
	int num;

	for (num = 0; num < 8; num++)
	{
		_putchar(c[num]);
	}
	_putchar('\n');
	return (0);
}
