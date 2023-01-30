#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
  * free_listint2 - Frees a linked list
  * @head: The head of the linked list
  *
  * Return: Nothing
  */
void free_listint2(listint_t **head);
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;

}
