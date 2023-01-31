#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
  * delete_nodeint_at_index -  a function that deletes the node at
  * index index of a listint_t linked list
  *
  * @head: The head of the linked list
  * @index: value of index of nom
  *
  * Return: Nothing
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(*head);
		next = *head;
		return (1);
	}
	current = *head;

	for (i = 0; i < (index - 1); i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
