#include "main.h"
#include <stdio.h>

/**
 * set_string -  a function that sets the value of
 * a pointer to a char.
 *
 * @s: The pointer
 * @to: The character
 *
 * Return: a pointer to the first occurence of character @c
 */
void set_string(char **s, char *to)
{
	*s = to;
}
