#include "main.h"
#include <stdlib.h>

/**
* str_concat - function concatenates two strings
* @s1: first string parameter
* @s2: second string parameter
* Return: returns the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *new;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	new = malloc(sizeof(s1) + sizeof(s2) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	new = s1 + s2;
	return (new);
}
