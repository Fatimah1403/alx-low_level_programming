#include "main.h"
#include <string.h>

/**
 * string_toupper -   function that changes all
 * lowercase letters of a string to uppercase
 *
 * @s: charcter to change
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;

		}
		i++;
	}
	return (s);

}


