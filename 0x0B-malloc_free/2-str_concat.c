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
	int count_1, count_2, res, i, j;

	count_1 = 0;
	count_2 = 0;
	i = 0;
	j = 0;
	if (s1 == NULL)
		return ("");
	else if (s2 == NULL)
		return ("");
	while (s1[count_1])
	{
		count_1++;
	}
	while (s2[count_2])
	{
		count_2++;
	}
	res = count_1 + count_2;
	tmp = malloc(res * sizeof(char) + 1);
	if (tmp == NULL)
		return (NULL);
	while (i < res)
	{
		if (i < count_1)
		{
			tmp[i] = s1[i];
		}
		if (i >= count_1)
		{
			tmp[i] = s2[j];
		}
		i++;
		j++;
	}
	return (tmp);
}
