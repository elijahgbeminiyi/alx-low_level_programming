#include "lists.h"

/**
* listint_len- function that returns the length of a list
* @h: list parameter
* Return: returns the lenght
*/

size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
