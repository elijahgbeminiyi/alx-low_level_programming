#include "lists.h"

/**
* print_list - prints the elements of a list
* @h: character parameters
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h = NULL)
		printf("[%d] (nil)\n", count);
	list_t *ptr = NULL;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return(count);
}
