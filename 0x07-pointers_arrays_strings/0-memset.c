#include "main.h"

/**
* _memset - This fuction is a memory set
* @s: string param
* @b: character param
* @n: integer param
*
* Return: Returns a string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (*s);
}
