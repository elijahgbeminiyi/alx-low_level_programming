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
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", h->len, h->str);
			h = h->next;
			count++;
	}
	return (count);
}
