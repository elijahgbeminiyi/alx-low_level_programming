#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function that returns 2D array
* @width: width of array
* @height: height of array
* Return: returns 2D array
*/

int **alloc_grid(int width, int height)
{
	int w, h, **array;

	w = 0;
	h = 0;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	while (h < height)
	{
		array[h] = malloc(width * sizeof(int));
		if (array[h] == NULL)
		{
			free(array[h]);
			free(array);
			return (NULL);
		}
		while (w < width)
		{
			array[h][w] = 0;
			w++;
		}
		h++;
	}
	return (array);
}
