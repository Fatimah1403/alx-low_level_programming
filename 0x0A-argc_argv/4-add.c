#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that prints adds positive numbers
 *
 * @argc: argument count/ first argument
 * @argv: argument vector/ second argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned int k, sum = 0;
	char *e;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (k = 0; k < strlen; k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}


			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");

	}
	return (0);
}
