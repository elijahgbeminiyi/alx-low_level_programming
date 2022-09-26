#include "main.h"

/**
* _strchr - This function is a string character
* @s: string param
* @c: char param
* Return: returns a string
*/

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
