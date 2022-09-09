#include <stdio.h>

/**
 * main - This function prints alphabets
 * num: stores all numbers
 *
 * Return: returns 0
 */

int main(void)
{
	/*Declarations*/
	int i;

	/*Statements*/
	for (i = 0; i < 10; i++)
	{
		putchar((i) + '0');
	}
	putchar('\n');
	return (0);
}
