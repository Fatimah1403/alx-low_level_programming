#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
  * sum_listint - a function that returns the sum of all the
  * data (n) of a listint_t linked list.
  *
  * @head: The head of the linked list
  *
  * Return: Nothing
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
