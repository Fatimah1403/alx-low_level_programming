#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  a function that concatenate two strings
 *
 * @s1: First string
 * @s2: second string
 * @n: Integer value
 *
 * Return: Always 0 (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, k;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		n = s2;
	p = malloc(sizeof(char) * (s1 + n + 1));

	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		p[k] = s1[i];
	}
	for (k = 0; k < j; k++)
	{
		p[k] = s2[i - s1];
	}
	p[k] = '\0';

	return (p);



}
