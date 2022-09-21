#include "main.h"

/**
* _strcat - This function concatenates two strings
* @dest: first parameter
* @src: second parameter
* Return: Return a string
*/

char *_strcat(char *dest, char *src)
{
	int count = 0, i;

	while (dest[count])
	{
		count++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count += 1;
	}
	dest[count] = ('\0');
	return (*dest);
}
