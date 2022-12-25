#include "main.h"
#include <string.h>

/**
 * print_number -  function that prints an integer
 *
 * @n: integer to be printed
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int i = 0;

	if (n < 0)
	{
		_putchar('-');

		n *= -1;

	}
	i = n;

	if (i / 10)
		print_number(i / 10);

	_putchar(i % 10 + '0');

}
