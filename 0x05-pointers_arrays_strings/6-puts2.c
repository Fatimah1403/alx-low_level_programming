#include "main.h"
#include <string.h>

/**
 * puts2 -  a function that prints every other character of a
 * string, starting with the first character
 *
 * @str: string to be printed
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i, n;

	n = strlen(str);

	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
