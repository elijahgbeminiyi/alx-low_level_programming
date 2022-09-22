#include "main.h"
#include <stdio.h>

/**
 * _strcmp - This funtion compares two strings
 * @s1: first param
 * @s2: second param
 *
 * Return: returns the difference
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	for (i = 0; ((s1[i] != '\0') && (s2[i] != '\0')); i++)
	{
		diff = s1[i] - s2[i];
	}
	return (diff);
}
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";
	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
