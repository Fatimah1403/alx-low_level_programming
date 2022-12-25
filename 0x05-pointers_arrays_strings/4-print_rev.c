#include "main.h"
#include <string.h>

/**
 * print_rev -  function that prints a string in a reverse
 *
 * @s: string to be printed
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
