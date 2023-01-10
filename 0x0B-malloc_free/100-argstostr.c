#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that concatenates
 * all the arguments of your program.
 *
 * @ac: The argument
 * @av: The vector of the arg.
 *
 * Return: a pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, size = ac, k;
	char *a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;

	}


	a = malloc(sizeof(char) * size + 1);
	k = 0;

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[k] = av[i][j];
			k++;

		}

		a[k] = '\n';
		k++;

	}
	a[k] = '\0';

	return (a);
}
