#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: pointer to pointer to the head
 * @str: string
 *
 * Return: the address of the new element or NULL if failed
 */
list_t add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *current;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
