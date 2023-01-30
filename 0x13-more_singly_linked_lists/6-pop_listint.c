#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
  * pop_listint - a function that deletes the head node of a
  * listint_t linked list, and returns the head node’s data (n)
  * @head: The head of the linked list
  *
  * Return: the haed node
  */
int pop_listint(listint_t **head)
{
	int ret;
	listint_t temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (ret);

}
