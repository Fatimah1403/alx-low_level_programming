#include "main.h"

/**
 * print_sign - a function that that prints the sign of a number
 * @n: the nos to be printed
 * Return: 1 if n > 0 , return 0 if n = 0, return -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
