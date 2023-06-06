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

	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;

	while (idx != 0 && newer != NULL)
	{
		newer = newer->next;
		idx--;
	}
	if (newer == NULL && idx != 0)
	{
		free(new);
		return (NULL);
	}
	new->next = newer;
	*head = new;
	return (new);
}
