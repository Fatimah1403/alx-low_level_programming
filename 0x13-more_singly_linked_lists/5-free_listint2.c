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
	if (head == NULL)
		return;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;

}
