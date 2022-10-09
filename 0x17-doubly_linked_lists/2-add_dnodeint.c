#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a
 * linked list
 * @head: the head node in the doubly linked list
 * @n: element in each node of the list
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	newnode->prev = NULL;

	if (!newnode)
		return (NULL);

	newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	if (!head)
		(newnode->next)->prev = newnode;

	return (*head);
}
