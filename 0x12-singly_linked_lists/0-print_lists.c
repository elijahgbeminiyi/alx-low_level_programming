#include "lists.h"

/**
* print_list - prints the elements of a list
* @h: character parameters
* Return: a size_t
*/

size_t print_list(const list_t *h)
{
	register int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", count)
		else
			printf("[%d] %s\n", h->len, h->str)
			count++;
		h = h->next;
	}
	return (count);
}
