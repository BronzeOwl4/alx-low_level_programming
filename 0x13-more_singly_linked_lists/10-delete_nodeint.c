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
	listint_t *newer = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	while (new != NULL && i < index)
	{
		newer = new;
		new = new->next;
		i++;
	}
	if (new == NULL)
		return (-1);
	newer->next = new->next;
	free(new);
	return (1);
}
