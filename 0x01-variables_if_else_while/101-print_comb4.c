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
	int num1, num2, num3;

	/*Statements*/
	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if (num1 == 7 && num2 == 8 && num3 == 9)
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
