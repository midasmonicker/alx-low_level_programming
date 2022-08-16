#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - gets node at a particular index
 * @head: head of the linked list
 * @index: the index of the node to be returned
 *
 * Return: the nth node of the linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
