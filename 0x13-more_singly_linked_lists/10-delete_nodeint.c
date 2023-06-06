#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: double pointer to the head of the listint_t list
 * @index: the index of the node that should be deleted, index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head;
	listint_t *newer;
	unsigned int a;

	switch (!*head)
	{
		case 1:
			return (-1);
		default:
			break;
	}
	switch (index)
	{
		case 0:
			*head = new->next;
			free(new);
			return (1);
		default:
			break;
	}
	for (a = 0; new != NULL && a < index - 1; a++)
		new = new->next;
	switch (!new || !new->next)
	{
		case 1:
			return (-1);
		default:
			break;
	}
	newer = new->next->next;
	free(new->next);
	new->next = newer;
	return (1);
}
