#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: The size to be printed
 * @c: characters to be printed.
 *
 * Return: Always 0 (success)
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	b = malloc(size * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	return (b);

}
