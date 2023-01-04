#include "main.h"


/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 * @s: string to be printed
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
