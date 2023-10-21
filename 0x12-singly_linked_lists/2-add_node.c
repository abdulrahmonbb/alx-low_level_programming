#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to pointer to list_t
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_dup;
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
