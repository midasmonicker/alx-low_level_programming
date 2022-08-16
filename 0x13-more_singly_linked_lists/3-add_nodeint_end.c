#include "lists.h"
#include "stddef.h"

/**
 * add_nodeint_end - add node at the end of the linked list
 * @head: the first node
 * @n: element to be added to the end of list
 *
 * Return: the address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *end;

	new_node = malloc(sizeof(listint_t));
	end = (*head);

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}

	end->next = new_node;

	/*You can also return end since *head was assigned to it*/
	return (*head);
}
