#include "main.h"

/**
 * _isalpha - a function that checks for alphabetical order
 * @c: is a single letter, lowercase or uppercase
 * Return: 1 if inc is lowercase, 0 if it is otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	   (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
