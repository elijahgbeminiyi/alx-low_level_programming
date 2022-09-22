#include "main.h"
#include <string.h>

/**
 * _strncpy - This funct copies a string
 * @dest: first param
 * @src: second param
 * @n: third param
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
