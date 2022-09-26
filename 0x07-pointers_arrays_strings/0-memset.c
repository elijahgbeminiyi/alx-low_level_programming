#include "main.h"

/**
* _memset - This fuction is a memory set
* @s: string param
* @b: character param
* @n: integer param
* Return: Returns a string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
