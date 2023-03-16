#include "lists.h"
#include <stdlib.h>
/**
  * sum_dlistint - the sum of all the data (n) of a dlistint_t
  * @head: The head of the doubly linked list
  *
  * Return: The new head of the doubly linked list
  */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *current = head;

	if (head)
	{
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);


}
