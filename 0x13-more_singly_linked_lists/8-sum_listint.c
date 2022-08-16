#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked
 * list
 * @head: the start of the linked list
 *
 * Return: sum of all the data of the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
