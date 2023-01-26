#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * list_len -  a function that returns the num of elements of a list_t list
 *
 * @h: the size of nos to be printed
 * Return: the number of nodes
 *
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
