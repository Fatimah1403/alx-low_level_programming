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
	int i, arr_range;
	int *p;

	if (min > max)
		return (NULL);
	arr_range = max - min + 1;
	p = malloc(sizeof(int) * arr_range);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < arr_range; i++; min++)
	{
		p[i] = min;
	}
	return (p);


}
