#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newest;
	size_t length;
	char *another_str;

	newest = malloc(sizeof(list_t));
	if (newest == NULL)
		return (NULL);

	length = strlen(str);
	another_str = malloc(length + 1);
	if (another_str == NULL)
	{
		free(newest);
		return (NULL);
	}
	memcpy(another_str, str, length + 1);
	newest->str = another_str;
	newest->len = length;
	newest->next = *head;
	*head = newest;
	return (newest);
}
