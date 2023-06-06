#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: double pointer to head of list
 * @idx: index of the list where the new node should be added (starts at 0)
 * @n: data for new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *newer = *head;
	unsigned int a;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (a = 0; newer != NULL && a < idx - 1; a++)
		newer = newer->next;
	if (newer == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = newer->next;
	newer->next = new;
	return (new);
}
