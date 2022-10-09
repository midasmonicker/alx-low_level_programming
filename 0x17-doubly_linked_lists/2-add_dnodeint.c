#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a
 * linked list
 * @head: the head node in the doubly linked list
 * @n: element to be included in the added node of the list
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->prev = NULL;
	newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	if (newnode->next)
		(newnode->next)->prev = newnode;

	return (*head);
}
