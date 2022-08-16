#include "lists.h"

/**
 * add_nodeint - add new created node to head address
 * @head: pointer to head node
 * @n: integer value
 *
 * Return: pointer to head node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);

}
