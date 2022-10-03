#include "main.h"
#include <stdlib.h>

/**
* create_array - Function to create an array
* @size: size of array
* @c: character to be inserterd in array
*
* Return: returns a pointer to a character
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	i = 0;
	/* First check if size is 0 */
	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
