#include "function_pointers.h"

/**
 * int_index - a function a function that searches for an integer.
 *
 * @array: array to be executed
 * @size: size of the array
 * @cmp: a pointer to the function to be used
 *
 * Return: the pointer to be used
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
