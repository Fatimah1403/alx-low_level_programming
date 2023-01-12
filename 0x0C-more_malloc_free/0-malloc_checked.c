#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocted memory using malloc
 *
 * @b: The int to be printed
 *
 * Return: Always 0 (success)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (b == NULL)
	{
		exit(98);
	}
	return (b);
}
