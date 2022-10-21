#include "lists.h"

/**
* list_len - function for node length
* h: head parameter
* Return: returns length
*/

size_t list_len(const list_t *h)
{
	register int len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
