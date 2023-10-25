#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to the first node.
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
