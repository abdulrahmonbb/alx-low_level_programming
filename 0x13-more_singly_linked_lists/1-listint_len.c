#include "lists.h"
/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: pointer to the listint_t structure
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}