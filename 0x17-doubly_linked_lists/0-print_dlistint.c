#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list
 * @h: head of the elements
 *
 * Return: Always 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return (length);

}
