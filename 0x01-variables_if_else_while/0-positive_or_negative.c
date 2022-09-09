#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - This fuctions prints a random number with a formatted output
 * n: Varaible that holds the random value
 *
 * Return: returns 0
 *
 */

int main(void)
{
	/*declarations of variables*/
	int n;

	/*statements displayed here*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	/*This code block runs only if the value of n is greater than 0*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	/*This code block runs only if the value of n is lesser than 0*/
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	/*This code block runs only if the value of n is*/
	/* neither greater nor lesser than 0*/
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
