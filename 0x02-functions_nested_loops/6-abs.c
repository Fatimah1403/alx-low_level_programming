#include "main.h"

/**
 * _abs - gives the absolute part of the integer
 *@n: the integer to compute
 * Return: absolute integer
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
