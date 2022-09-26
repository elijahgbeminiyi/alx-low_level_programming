#include "main.h"

/**
* _memcpy - This function copies a memory address
* @dest: first param
* @src: second param
* @n: int param
*
* Return: returns a string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
