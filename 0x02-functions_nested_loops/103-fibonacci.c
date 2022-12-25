#include <stdio.h>

/**
 *main- prints the sum of even fibonacci
 *		 numbers less 4,000,000
 *
 * Return: Always return 0, (successful)
 */
int main(void)
{
	int i = 0;

	long fib1 = 1, fib2 = 2, fibsum;

	while (fib2 + fib1 < 4000000)
	{
		fib2 += fib1;

		if (fib2 % 2 == 0)
			fibsum += fib2;

		fib1 = fib2 - fib1;

		++i;
	}
	printf("%ld\n", fibsum);
	return (0);
}
