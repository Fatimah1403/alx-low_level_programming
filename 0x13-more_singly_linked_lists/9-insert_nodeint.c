#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
  * insert_nodeint_at_index - a function that inserts a new
  * node at a given position
  *
  * @head: The head of the linked list
  * @idx: index of the new node list
  * @n: data pass in the list
  *
  * Return: Nothing
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);

}
