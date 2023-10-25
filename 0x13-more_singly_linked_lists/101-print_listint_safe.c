#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = head, *temp2 = head, *next;

	if (!head)
		exit(98);

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		next = temp->next;
		if (next >= temp2)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
		temp = next;
		if (!temp)
			break;
		if (temp >= temp2)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
		temp2 = temp2->next;
	}
	return (count);
}
