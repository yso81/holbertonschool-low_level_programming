#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *  @h: A pointer to the head of the doubly linked list.
 *
 *  Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current_node = h;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		count++;
	}
	return (count);
}
