#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy string
 * @dest: para1
 * @src: para2
 *
 * Return: void parameter
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
		{
			break;
		}
		count++;
	}
	return (dest);
}
