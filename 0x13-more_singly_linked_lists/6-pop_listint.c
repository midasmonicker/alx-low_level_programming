#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and
 * returns its data
 * @head: the first node that needs to be deleted
 *
 * Return: the deleted head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
