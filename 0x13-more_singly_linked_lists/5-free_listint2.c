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

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}

	}
	else
	{
		return;
	}
	free(*head);
	head = 0;

}
