#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to the head of the list
 * @n: Integer to be added to the list
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t **newer = head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	while (*newer)
		newer = &(*newer)->next;
	*newer = new;
	return (new);
}
