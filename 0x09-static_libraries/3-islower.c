#include "main.h"

/**
 * _islower - a function that checks for lower charcter
 * @c: is a single lowercase
 * Return: 1 if inc is lowercase, 0 if it is otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
