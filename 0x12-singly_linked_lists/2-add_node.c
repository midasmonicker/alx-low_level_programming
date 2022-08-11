#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: start of a linked list
 * @str: string inputs in the linked list
 *
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t charCount;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (charCount = 0; str[charCount]; charCount++)
		;

	new->len = charCount;
	new->next = *head;
	*head = new;

	return (*head);
}
