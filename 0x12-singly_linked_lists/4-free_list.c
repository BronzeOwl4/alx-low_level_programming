#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *newest;

	if (head)
	{
		do {
			newest = head;
			head = head->next;
			free(newest->str);
			free(newest);
		} while (head);
	}
}
