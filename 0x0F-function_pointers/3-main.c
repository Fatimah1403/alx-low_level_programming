#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  performs simple operations
 * @argc:  number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int num1, num2, c;
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	opr = get_op_func(argv[2]);
	num2 = atoi(argv[3]);

	if (opr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = opr(num1, num2);
	printf("%d\n", c);

	return (0);
}
