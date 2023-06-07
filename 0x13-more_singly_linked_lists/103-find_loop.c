#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *two = head;
	listint_t *one = head;

	while (two && one && one->next)
	{
		two = two->next;
		one = one->next;
		if (two == one)
		{
			two = one;
			while (two != one)
			{
				two = two->next;
				one = one->next;
			}
			return (two);
		}
	}
	return (NULL);
}
