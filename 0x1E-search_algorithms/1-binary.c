#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left, mid, right;
	int i;

	if (array == NULL)
		return (-1);

	left = 0;
	right  size - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)

			printf("%d, ", array[i]);
		prinf("%d\n", array[i]);


		if (araay[mid] < value)
		{
		      left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}



	}
	return (-1);
}
