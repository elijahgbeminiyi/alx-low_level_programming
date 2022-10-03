#include "main.h"
#include <stdlib.h>

/**
* _strdup - function to copy a given string
* @str: string parameter
*
* Return: returns a string copy
*/
char *_strdup(char *str)
{
	char *tmp;
	int i, j;

	i = 0;
	j = 0;
	/* Declare condition to avoide errors */
	if (str == NULL)
	{
		return (NULL);
	}
	/* First get the length of the string */
	while (str[i])
	{
		i++;
	}
	tmp = malloc(i * sizeof(char) + 1);
	/* Declare condition to avoid errors */
	if (tmp == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		/* Copying the values of the input string into the temp string */
		tmp[j] = str[j];
		j++;
	}
	return (tmp);
}
