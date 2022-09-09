#include <stdio.h>

/**
 *  main - This function prints all various data types
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
	printf("Size of a char: %u byte(s)\n", (unsigned int)sizeof(a));
	printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (long unsigned int)sizeof(c));
	printf("Size of a long long int: %llu byte(s)\n", (long long unsigned int)sizeof(d));
	printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(e));
}
