#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * wordcnt - counts the number of words in a string
 * @s: string to count
 *
 * Return: int of number of words
 */i
int wordcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - Write a function that splits a string into words
 *
 * @str: String to be splitted
 *
 * Return: Always 0 (success)
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, m = 0;
	char **a;

	if (str == NULL || str == '\0')
		return (NULL);
	n = wordcnt(str);
	if (n == 1)
		return (Null);
	a = (char **)malloc(n * sizeof(char *));
	if (a == NULL)
		return (NULL);
	a[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			a[m] = (char *)malloc(j * sizeof(char));
			j--;
			if (a[m] == NULL)
			{
				for (k = 0; k < m; k++)
					free(a[k]);
				free(a[n - 1]);
				free(a);
				return (NULL);
			}
			for (l = 0; l < j; l++)
			a[m][l] = str[i + l];
			a[m][l] = '\0';
			m++;
			i += j;
		}
		else
			i++;
	}
	return (a);
}
