#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - counts the number of elements in
 * a linked listint_t list
 * @h: pointer to the linked list
 *
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
