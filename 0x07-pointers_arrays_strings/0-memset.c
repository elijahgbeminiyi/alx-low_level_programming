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
	memset(*s, b, n);
	return (s);
}
