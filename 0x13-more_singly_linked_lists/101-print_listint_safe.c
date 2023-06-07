#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp;
	listp_t *new_node, *hptr = NULL;

	while (head)
	{
		new_node = malloc(sizeof(listp_t));
		if (!new_node)
			exit(98);
		new_node->p = (void *)head;
		new_node->next = hptr;
		hptr = new_node;
		temp = head;
		head = head->next;

		for (new_node = hptr->next; new_node; new_node = new_node->next)
			if (new_node->p == head)
			{
				printf("-> [%p] %d\n", (void *)head, temp->n);
				while (hptr)
				{
					temp = (const listint_t *)hptr->p;
					free(hptr);
					hptr = hptr->next;
				}
				return (count);
			}
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
	}
	while (hptr)
	{
		temp = (const listint_t *)hptr->p;
		free(hptr);
		hptr = hptr->next;
	}
	return (count);
}
