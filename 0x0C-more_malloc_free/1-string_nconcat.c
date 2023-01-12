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
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (j > n)
		j = n;
	p = malloc(sizeof(char) * (i + j + 1));

	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		p[k] = s1[i];
	}
	for (k = 0; k < j; k++)
	{
		p[k + i] = s2[k];
	}
	p[i + j] = '\0';

	return (p);



}
