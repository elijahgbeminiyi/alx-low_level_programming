#include "main.h"
#include <string.h>

/**
 * _strncat - This func concatenates strings with a given int
 * @dest: first param
 * @src: second param
 * @n: third param
 * Return: returns a string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
