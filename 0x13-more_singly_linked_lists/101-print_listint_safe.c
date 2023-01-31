#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(sizeof(listint_t) * size);
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);

}

/**
 * print_listint_safe - a function that reverses a listint_t linked list
 * @head: name of the list
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = 0;
	const listint_t **list = Null;

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == list[i])
			{
				pintf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (count);
			}
			count++;
			list = _r(list, count, head);
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		free(list);
		return (count);
	}

}
