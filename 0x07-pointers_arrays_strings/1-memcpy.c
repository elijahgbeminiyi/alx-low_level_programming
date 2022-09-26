#include "main.h"

/**
* _memcpy - This function is gonna copy an address
* @dest: destination param
* @src: source memory param
* @n: number of bytes to be printed
*
* Return: return string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
