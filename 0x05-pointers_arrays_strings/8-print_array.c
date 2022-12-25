#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array to be printed
 * @n: number of values to be printed
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
			if (i == n - 1)
				continue;
			printf(", ");
	}
	printf("\n");
}
