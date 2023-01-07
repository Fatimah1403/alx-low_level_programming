#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints
 * the minimum number of coins to make change for an amount of money
 *
 * @argc: argument count/ first argument
 * @argv: argument vector/ second argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int value, c;

	c = 0;
	if (argc != 2)
	{
		prinf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (value % 25 >= 0)
	{
		c += value / 25;
		value = value % 25;
	}
	if (value % 10 >= 0)
	{
		c += value / 10;
		value = value % 10;
	}
	if (value % 15 >= 0)
	{
		c += value / 15;
		value = value % 15;
	}
	if (value % 2 >= 0)
	{
		c += value / 2;
		value = value % 2;
	}
	if (value % 1)
	{
		c += value / 1;
	}
	printf("%d\n", c);
	return (0);
}
