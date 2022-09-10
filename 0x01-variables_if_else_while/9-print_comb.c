#include <stdio.h>

/**
 * main - This function prints alphabets
 * num: stores all number
 *
 * Return: returns 0
 */

int main(void)
{
	/*Declarations*/
	int num;

	/*Statements*/
	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		/*if (num == 9)*/
		/*{*/
		/*	continue;*/
		/*}*/
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
