#include "lists.h"

/**
* print_list - prints the elements of a list
* @h: character parameters
*/

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0)
		else
			printf("[%i] %s\n", h->len, h->str)
		h = h->next;
		count++;
	}
	return (count);
}
