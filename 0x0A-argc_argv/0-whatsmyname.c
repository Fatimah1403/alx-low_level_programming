#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of a program
 *
 * @argc: argument count/ first argument
 * @argv: argument vector/ second argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv++);

	}
	return (0);
}
