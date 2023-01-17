#ifndef _3_FUNCTION_LIKE_MACRO_H
#define _3_FUNCTION_LIKE_MACRO_H

#include <stdlib.h>

/**
 * ABS - Functionthat computes absolute value of x.
 *
 * @x: integer to check the absolute value
 *
 * Return: Always (0) for success
 */
int ABS(int x)
{
	return ((x < 0) ? (-x) : (x));
}

#endif
