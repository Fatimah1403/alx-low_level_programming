#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers
 *
 * @min: Array at minimum.
 * @max: Array at maximum.
 *
 * Return: Always 0 (success)
 */
int *array_range(int min, int max)
{
	int i, a;
	int *p;

	if (min > max)
		return (NULL);
	a = max - min + 1;
	p = malloc(sizeof(int) * a);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < a; i++; min++)
	{
		p[i] = min;
	}
	return (p);
}
