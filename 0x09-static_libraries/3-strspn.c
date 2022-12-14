#include "main.h"
#include <stdio.h>

/**
 * _strspn -  a function that gets the length of a prefix substring.
 *
 * @s: The string to be returned
 * @accept: The character to be returned
 *
 * Return: the number of bytes of the initial segment  @s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, len, j;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '0'; j++)
			{
				if (s[i] == accept[j])
				len++;

			}
		}
		else
			return (len);

	}

	return (len);

}

