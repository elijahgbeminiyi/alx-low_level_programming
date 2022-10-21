#include "lists.h"

/**
* list_len - function for node length
* h: head parameter
* Return: returns length
*/

size_t list_len(const list_t *h)
{
	size_t len;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
