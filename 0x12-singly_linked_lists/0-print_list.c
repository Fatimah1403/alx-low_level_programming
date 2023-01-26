#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_list -  a function that prints all the elements of a list_t list
 *
 * @h: the size of nos to be printed
 * Return: the number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{

		if (h->str == NULL)
		{

			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (n);

}
