#include "main.h"


/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: number to be returned
 * Return: Always 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);

	}
	return (n * factorial(n - 1));
}
