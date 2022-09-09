#include <stdio.h>

/**
 * main - This function prints all various data types
 *
 (* This programs is desined to print various data types and their sizes)
 *  Return: Returns 0
 *
 */

int main(void)
{
	/*Declarations*/
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	/*Statements*/
	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
