#include "main.h"
#include <stdlib.h>

/**
* argstostr - function to turn args to str
* @ac: args parameter
* @av: str parameter
* Return: returns a string
*/

char *argstostr(int ac, char **av)
{
	int i, j, a, b, c;
	char *tmp;

	i = 0;
	j = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* Getting the len of str and adding it to int */
	while (i < ac)
	{
		while (av[i][j])
		{
			ac++;
			j++;
		}
		i++;
	}
	tmp = malloc(ac * sizeof(char) + 1);
	if (tmp == NULL)
	{
		return (NULL);
	}
	a = 0;
	b = 0;
	c = 0;
	while (a < ac)
	{
		while (av[a][b])
		{
			tmp[c] = av[a][b];
			b++;
		}
		_putchar('\n');
		a++;
	}
	return (tmp);
}
