#include <stdio.h>

/**
 * main - This function prints alphabets
 * hex: stores all hexadecimal character
 *
 * Return: returns 0
 */

int main(void)
{
	/*Declarations*/
	char letter;
	int num;

	/*Statements*/
	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
