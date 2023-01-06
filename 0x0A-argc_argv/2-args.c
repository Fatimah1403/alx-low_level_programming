#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: argument count/ first argument
 * @argv: argument vector/ second argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;


	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n",  argv[i]);
	}

	return (0);


}
