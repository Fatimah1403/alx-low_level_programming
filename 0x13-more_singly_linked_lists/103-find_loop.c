#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: name of the list
 * Return: the number of nodes.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			break;
		}
	}
	if (!slow || !fast || !fast->next)
		return (NULL);
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (fast);
}
