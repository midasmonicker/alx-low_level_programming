#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t list
 * @head: head of a linked list
 * @str: string input in the list
 *
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t charCount;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (charCount = 0; str[charCount]; charCount++)
		;

	new->len = charCount;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
