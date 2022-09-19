#include "main.h"

/**
 * print_rev - Prints reverse string
 * @s: parameter variable
 *
 * Return: A void function
 */

void rev_string(char *s)
{
	int i = 0, j, k;
	char *c, t;
	
	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	
	c = s;
	
	for (j = 0; j < (i - 1); j++)
	{
		for (k = j + 1; k > 0; k--)
		{
			t = *(c + k);
			*(c + k) = *(c + (k - 1));
			*(c + (k - 1)) = t;
		}
	}
}
