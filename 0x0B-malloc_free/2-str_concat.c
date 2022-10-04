#include "main.h"
#include <stdlib.h>

/**
* str_concat - function concatenates two strings
* @s1: first string parameter
* @s2: second string parameter
* Return: returns the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *tmp;
	int count_1, count_2, i, res;

	count_1 = 0;
	count_2 = 0;
	i = 0;
	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	while (s1[count_1])
	{
		count_1++;
	}
	while (s2[count_2])
	{
		count_2++;
	}
	res = count_1 + count_2;
	tmp = malloc(res * sizeof(char));
	if (tmp == NULL)
	{
		return (NULL);
	}
	while (i < count_1)
	{
		tmp[i] = s1[i];
		i++;
	}
	while (j < count_2)
	{
		tmp[i] = s2[j];
		i++;
		j++;
	}
	return (tmp);
}
