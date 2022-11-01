#include "lists.h"

/**
* add_node - function that add a node to the beginning of a list
* @head: head parameter
* @str: character parameter
* Return: returns a struct
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t n;

	n = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	while (str[n])
	{
		n++;
	}
	new_node->len = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
