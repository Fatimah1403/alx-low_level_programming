#include "main.h"
#include <stdio.h>

/**
 * _strchr -  a function that locates a character in a string.
 *
 * @s: The string to be returned
 * @c: The character to be returned
 *
 * Return: a pointer to the first occurence of character @c
 */
char *_strchr(char *s, char c)
{
	unsigned int i, j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i;  j++)
	{
		if (c == s[j])
		{
			s += b;

			return (s);
		}
	}
	return ('\0');

}
