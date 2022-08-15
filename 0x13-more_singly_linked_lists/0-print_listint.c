#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listing - prints all elements in listint_t
 * @h: pointer to each node
 *
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
