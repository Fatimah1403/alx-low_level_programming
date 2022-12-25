#include "main.h"
#include <string.h>

/**
 * rev_string -  function that prints a string in a reverse
 *
 * @s: string to be printed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, len1, len2;
	char temp;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
	{
		len1++;
	}

	len2 = len1 - 1;
	for (i = 0; i < len1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[len2];
		s[len2] = temp;
		len2 -= 1;
	}
}
