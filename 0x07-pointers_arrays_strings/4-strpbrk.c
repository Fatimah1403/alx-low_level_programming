#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 *
 * @s: The string to be returned
 * @accept: The character to be returned
 *
 * Return: the number of bytes of the initial segment  @s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');

}
