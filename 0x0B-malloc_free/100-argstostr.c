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
	int i, k = 0;
	char **a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * k);
	a[0] = '\0'

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		k += strlen(av[i]);
	}
	for (i = 1; i < ac; i++)
	{
		strcat(a, av[i]);
	}
	printf("%s\n", a);
	free(a);


}
