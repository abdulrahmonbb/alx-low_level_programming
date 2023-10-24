#include "lists.h"
/**
 * free_listint: frees a listint_t list
 * @head: pointer to the listint_t structure
 *
 * Return: void
 */
 void free_listint(listint_t *head)
 {
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
 }
