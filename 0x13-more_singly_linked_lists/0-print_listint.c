#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
