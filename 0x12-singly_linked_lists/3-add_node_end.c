#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: pointer to pointer to the head
 * @str: string
 * Return: the address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *current = *head;
	char *str_dup = strdup(str);

	if (str == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = str_dup;
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
