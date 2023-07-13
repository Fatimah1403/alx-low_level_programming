#include "search_algos.h"

/**
 * interpolation_search -  function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t formular = 0;

	if (!array || size == 0)
		return (-1);

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		formular = low + (((double)(high - low) / (array[high] - array[low]))
			    * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", formular, array[]formular);

		if (array[formular] == value)
		{
			return (formular);
		}
		else if (array[probe] < value)
		{
			low = formular + 1;
		}
		else
		{
			high = formular - 1;
		}
		if (value == array[low])
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			return (low);
		}

		formular = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] is out of range\n", formular);
		return (-1);

	}

}
