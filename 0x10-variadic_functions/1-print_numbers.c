#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - functions that prints numbers.
 * @separator: The string to be printed btw nos
 * @n: number of integers passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: Always (0)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;

	va_start(pr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pr, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pr);
}
