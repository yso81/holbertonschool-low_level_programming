#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 *  @str: The string to be duplicated and stored in the new node.
 *
 *  Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new_node;
	list_t *current_node;
	unsigned int len = 0;
	const char *s;
	unsigned int i;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	s = str;
	while (*s)
	{
		len++;
		s++;
	}

	new_node->str = malloc(sizeof(char) * (len + 1));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		new_node->str[i] = str[i];
	}

	new_node->str[len] = '\0';

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (new_node);
}
