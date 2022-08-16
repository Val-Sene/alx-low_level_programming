#include "lists.h"

/**
 * add_nodeint_end - add new created node to the end of list
 * @head: pointer to head node
 * @n: integer value
 *
 * Return: pointer to end of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *newnode;


	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}

	return (*head);
}
