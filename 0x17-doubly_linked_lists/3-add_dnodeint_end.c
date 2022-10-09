#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of the list
 * @head: the head node
 * @n: value of the new node to be added
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;

	if (!*head)
	{
		newnode->prev = NULL;
		newnode = *head;
		return (newnode);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);
}
