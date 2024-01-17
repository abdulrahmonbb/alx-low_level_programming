#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked
 * list.
 * @head: pointer to the start of the list
 * @index: index of node to return
 * Return: the nth node of a linked list or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;
	while (head != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
