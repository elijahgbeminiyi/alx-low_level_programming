#include "lists.h"

/**
* list_len - list len function
* @h: param
* Return: size_t
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
