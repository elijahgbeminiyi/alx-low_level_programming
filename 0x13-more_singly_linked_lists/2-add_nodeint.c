#include "lists.h"

/**
* add_nodeint -> function that adds a new node at the beginning
* @head: pointer to the first element of the node
* @n: data of the new node to be added
* Return: returns a pointer to the node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
