#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe -> A function that frees a list
 * @h: A pointer listint_t structure
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *temp;
	listint_t *safe_node = *h;

	if (!h)
		return (0);
	while (safe_node != NULL)
	{
		counter++;
		temp = safe_node;
		safe_node = safe_node->next;
		free(temp);

		if (temp < safe_nod)
			break;

	}
	*h = NULL;
	return (counter);
}
