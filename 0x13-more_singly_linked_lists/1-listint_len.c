#include "lists.h"

/**
 * listint_len - returns no of element
 * @h: linked lists
 *
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
