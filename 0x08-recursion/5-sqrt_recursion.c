#include "main.h"

/**
 * check_sqrt - calculate natural squre root
 *
 * @a: first int
 * @b: second int
 * Return: If the number has a natural square root - the square root.
 * If the number does not have a natural square root - -1.
 */
int check_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check_sqrt(a + 1, b));

}






/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 *
 * @n: number to be returned
 * Return: Always 0 (success)
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (check_sqrt(1, n));

}
