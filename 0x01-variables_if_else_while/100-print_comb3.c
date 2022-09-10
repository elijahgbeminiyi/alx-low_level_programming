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
	int num, num2;

	/*Statements*/
	for (num = 0; num < 9; num++)
	{
		for (num2 = num + 1; num2 < 10; num2++)
		{
			putchar((num % 10) + '0');
			putchar((num2 % 10) + '0');
			if (num == 8 && num2 == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
