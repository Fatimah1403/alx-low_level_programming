#include "main.h"

/**
 * print_number- a funtion that prints aninteger
 *
 * @n: The integer to be printed
 *
 * Return: returns Nothing
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');

		m = -m;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar(m % 10 + '0');
}
