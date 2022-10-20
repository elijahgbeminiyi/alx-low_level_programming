#include "lists.h"

/**
* print_list - prints the elements of a list
* @h: character parameters
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", count)
		else
			printf("[%d] %s\n", h->len, h->str)
			count++;
	}
	return (count);
}
