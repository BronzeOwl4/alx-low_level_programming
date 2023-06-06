#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *new;

	if (*head == NULL)
		return (0);
	i = (*head)->i;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (i);
}
