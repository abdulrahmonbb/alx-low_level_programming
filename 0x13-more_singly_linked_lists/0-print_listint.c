#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a listint_t structure
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
