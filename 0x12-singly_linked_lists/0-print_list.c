#include "lists.h"

#include <stdio.h>

/**
 * print_list - prints all element
 * @h: the list_t lists
 *
 * Return: the number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t nodes_count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d]%s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes_count += 1;
	}
	printf("[%d]%s\n", h->len, h->str);
	return (nodes_count);
}
