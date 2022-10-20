#include "lists.h"

/**
* list_len - list len function
* @h: param
* Return: size_t
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *ptr;

	ptr = malloc(sizeof(list_t);
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->next == NULL)
			return(count);
		else
			ptr = ptr->next;
			count++;
	}
	return (count);
}
