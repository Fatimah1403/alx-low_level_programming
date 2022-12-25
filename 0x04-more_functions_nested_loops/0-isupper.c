#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: integer to store the charcters
 * Return: Return 1 if it is upper and 0 otherwise
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);

	}
	return (0);

}
