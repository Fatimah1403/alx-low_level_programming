#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: The size to be printed
 *
 * Return: Always 0 (success)
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	i++;
	p = malloc(i * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
