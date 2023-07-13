#include "search_algos.h"

size_t min(size_t a, size_t b);
int exponential_search(int *array, size_t size, int value);
int b_search(int *array, size_t low, size_t high, int value);


/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
 * b_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @low: Left index in the array
 * @high: right index in the array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int b_search(int *array, size_t low, size_t high, int value)
{
	size_t low, high;
	size_t mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);

}

/**
 * exponential_search -  function that searches for a value in a
 * sorted array of integers using the exponential_search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, index;

	if (!array || size == 0)
		return (-1);

	while (index < size && array[index] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       index, array[index]);
		index *= 2;
	}
	low = index / 2;
	high = min(index, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (b_search(array, value, low, high));

}
