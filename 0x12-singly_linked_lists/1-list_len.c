#include "lists.h"

/**
 * list_len - find the length
 * @h: head node
 *
 * Return: Length of node
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
