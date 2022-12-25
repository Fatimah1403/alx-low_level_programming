#include "main.h"
#include <stdio.h>

/**
 * reverse_array -  function that reverses the content of an array of integers.
 *
 * @a: interger to  t first pass.
 * @n: integer to pass secondly.
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	 int temp, i;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}

}
