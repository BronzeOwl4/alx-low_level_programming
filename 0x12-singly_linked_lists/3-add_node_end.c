#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newest;
	list_t *newer;
	size_t length;
	char *another_string;

	newest = malloc(sizeof(list_t));
	if (newest == NULL)
		exit(EXIT_FAILURE);
	length = strlen(str);
	another_string = malloc(length + 1);
	if (another_string == NULL)
	{
		free(newest);
		exit(EXIT_FAILURE);
	}
	memcpy(another_string, str, length + 1);
	newest->str = another_string;
	newest->len = length;
	newest->next = NULL;

	if (*head == NULL)
		*head = newest;
	else
	{
		newer = *head;
		while (newer->next)
			newer = newer->next;
		newer->next = newest;
	}
	return (newest);
}
