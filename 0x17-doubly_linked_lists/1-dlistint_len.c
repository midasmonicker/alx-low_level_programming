#include "lists.h"

/**
 * dlistint_len - returns the number fo elements in a linked list
 * @h: Head node in the doubly linked list
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
