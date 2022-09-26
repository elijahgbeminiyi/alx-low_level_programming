#include "main.h"

/**
* _strchr - This function is a string character
* @s: string param
* @c: char param
* Return: returns a string
*/

char *_strchr(char *s, char c)
{
	int i, j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (c == s[j])
		{
			s += b;
			return (s);
		}
	}
	return (NULL);
}
