#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: The first string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Return: Always 0 (success)
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;

	char *p;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;

	p = malloc(k * sizeof(char));

	if (p == NULL)
		return (NULL);
	j = 0;

	while (k < l)
	{
		if (k <= i)
			p[k] = s1[k];

		if (k >= i)
		{
			p[k] = s2[j];
			j++;
		}
		k++;
	}
	p[k] = '\0';
	return (p);
}
