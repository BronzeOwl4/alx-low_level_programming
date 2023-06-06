#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t time = 0;

	for (time = 0; h != NULL; time++)
		h = h->next;
	return (time);
}
