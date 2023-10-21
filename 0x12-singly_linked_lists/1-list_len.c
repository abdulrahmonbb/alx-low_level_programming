#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
