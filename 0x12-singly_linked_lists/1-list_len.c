#include "lists.h"

/**
 * list_len - returns the number of elements in linked lists
 * @h: pointer of the head (first node)
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
