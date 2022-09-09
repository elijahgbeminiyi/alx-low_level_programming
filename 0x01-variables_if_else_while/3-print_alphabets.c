#include <stdio.h>

/**
 * main - This function prints alphabets
 * alphabets: stores all alphabets character
 *
 * Return: returns 0
 */

int main(void)
{
	/*Declarations*/
	char alphabets;

	/*Statements*/
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
