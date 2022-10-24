#include "lists.h"

/**
* listint_len- function that returns the length of a list
* @h: list parameter
* Return: returns the lenght
*/

size_t listint_len(const listint_t *h)
{
	size_t len;
	listint_t *ptr = NULL;

	len = 0;
	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
