#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data(n) of a
 * linked list.
 * @head: pointer to the start of the list
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
