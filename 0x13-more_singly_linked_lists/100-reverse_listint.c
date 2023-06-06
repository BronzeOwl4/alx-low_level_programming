#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * reverse_listint_helper - helper function to reverse a linked list
 * @prev: pointer to the previous node in the list
 * @curr: pointer to the current node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint_helper(listint_t *prev, listint_t *curr)
{
	listint_t *next;

	if (curr == NULL)
		return (prev);
	next = curr->next;
	curr->next = prev;
	return (reverse_listint_helper(curr, next));
}
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	*head = reverse_listint_helper(NULL, *head);
	return *head;
}
