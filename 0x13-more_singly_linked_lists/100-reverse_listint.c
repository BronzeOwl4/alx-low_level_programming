#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *res;
	if (*head == NULL || (*head)->next == NULL)
		return *head;
	res = reverse_listint(&((*head)->next));
	(*head)->next->next = *head;
	(*head)->next = NULL;
	*head = res;
	return *head;
}
