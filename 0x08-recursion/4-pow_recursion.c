#include "main.h"


/**
 * _pow_recursion - a function that returns the
 * value of x raised to the power of y
 *
 * @x: value to be returned
 * @y: value to be returned
 *
 * Return: Always 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 1)
		return (y);
	else if (x % 2 == 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);

}
