#include "lists.h"

/**
 * pop_listint - delete node
 * @head: pointer to elements
 *
 * Return: data inside
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || *head)
	{
		return (0);
	}
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
