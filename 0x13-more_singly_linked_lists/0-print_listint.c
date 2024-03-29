#include "lists.h"

/**
 * print_listint - prints all nodes in the list
 * @h: head node
 *
 * Return: all nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
