#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  a function that allocates memory for an array
 *
 * @nmemb: memory of the array.
 * @size: size of the array.
 *
 * Return: Always 0 (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, j;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	j = nmemb * size;

	if (p == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		p[i] = 0;
	}
	return (p);

}
