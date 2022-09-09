#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Function prints a random number
 * n: stores the random number
 * last_digit: finds and stores the last digit of n
 *
 * Return: returns type of function, i.e int
 */

int main(void)
{
	/*Default declaration*/
	int n;
	/*new declarations*/
	int lst_dig;

	/*Statements here*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lst_dig = n % 10;

	if (lst_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dig);
	}
	else if ((lst_dig < 6) && (lst_dig != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dig);
	}
	else if (lst_dig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_dig);
	}
	return (0);
}
