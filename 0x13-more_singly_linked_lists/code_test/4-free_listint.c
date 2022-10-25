#include "lists.h"

/**
* free_listint -> functions that frees the struct
* @head: head node
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
