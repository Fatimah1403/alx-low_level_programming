#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  a  function that prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: The first square int matrix
 * @size: The second int square matrix
 *
 * Return: a pointer to the first occurence of character @c
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		sum1 += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		sum2 += *(a + p);
	}
	printf("%i, %i\n", sum1, sum2);

}
