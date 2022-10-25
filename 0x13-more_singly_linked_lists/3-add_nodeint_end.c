#include "lists.h"

/**
* add_nodeint_end -> function that adds a node at the end
* @head: head node
* @n: int parameter
* Return: returns a pointer
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node
	listint_t *ptr;

	(void)ptr;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	ptr = *head;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr->next = ptr;
		}
		ptr->next = new_node;
	}
	return (*head);
}
