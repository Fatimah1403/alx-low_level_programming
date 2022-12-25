#include "main.h"
#include <stdio.h>

/**
 * swap_int -  swaps the values of two integers
 *
 * @a: first parameter
 * @b: second parameter.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
