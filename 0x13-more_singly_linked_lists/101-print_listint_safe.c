#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t start = 0;
	const listint_t *tone;
	const listint_t **address;

	if (head == NULL)
		exit(98);
	address = malloc(sizeof(listint_t *) * 1024);

	if (address == NULL)
		exit(98);
	while (head != NULL)
	{
		for (tone = head; tone; tone = tone->next)
		{
			if (tone == head->next)
			{
				printf("-> [%p] %d\n", (void *)tone, tone->n);
				free(address);
				return (start);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		address[start] = head;
		head = head->next;
		start++;
	}
	free(address);
	return (start);
}
