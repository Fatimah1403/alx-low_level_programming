#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *@n: the integer to print
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l *= -1;
	}
	_putchar(l + '0');
	return (l);
}
