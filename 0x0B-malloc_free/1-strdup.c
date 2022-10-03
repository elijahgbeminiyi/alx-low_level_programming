#include "main.h"
#include <stdlib.h>

/**
*
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
		/* While strp[i] returns a value, increment i */
		i++;
	}
	/* At this point, i holds the length of the input string */

	/* Allocating the memory size of the input string to the new string */
	tmp = malloc(i * sizeof(char));

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
	/**
	* At this point, the tmp string would have all the values of the input string
	* ...copied into it.
	*/

	/* Function returns the temporary strin created */
	return (tmp);
}
