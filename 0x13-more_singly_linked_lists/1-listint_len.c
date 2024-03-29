#include "lists.h"

/**
 * listint_len - prints all nodes in the list
 * @h: head node
 *
 * Return: count of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
