#include "main.h"
#include <stdio.h>

/**
 * _strlen -   function that returns the length of a string.
 *
 * @s: char to return .
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int l = 0;

	for (; *s != '\0'; s++)
	{
		l++;
	}

	return (l);
}
