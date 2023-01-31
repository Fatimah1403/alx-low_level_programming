#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t count = 0;

	while (tmp)
	{
		tmp = *h;
		tmp = tmp->next;
		free_list(tmp);
		count++;
	}
	*h = NULL;

	return (counter);
}

/**
 * free_list -> A function that frees a listint_t recursively
 * @head: A pointer to the listint_t structure
 *
 * Return: Nothing
 */
void free_list(listint_t *head)
{
	listint_t *tmp;

	if (head)
	{
		tmp = head;
		tmp = tmp->next;
		free(tmp);
		free_list(tmp);
	}
	free(head);
}
