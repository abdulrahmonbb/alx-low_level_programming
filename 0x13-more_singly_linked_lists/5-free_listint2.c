#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the listint_t structure
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
