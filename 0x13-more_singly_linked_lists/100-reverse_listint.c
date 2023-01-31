#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: name of the list
 * Return: the number of nodes.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = prev;
	}
	*head = prev;
	return (*head);

}
