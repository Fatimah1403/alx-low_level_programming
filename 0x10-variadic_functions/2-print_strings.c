#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - functions that prints strings.
 * @separator: The string to be printed btw nos
 * @n: number of integers passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: Always (0)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;
	char *str;

	va_start(pr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(pr);
}
