#include "main.h"
#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 * Return: Always 0 (success)
 */
int main(void)
{
	int count;
	unsigned long int fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 98; count++)
	{
		sum = fib1 + fib2;

		if (count != 98)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu\n", sum);

		}
		fib1 = fib2;
		fib2 = sum;

	}


	return (0);
}
