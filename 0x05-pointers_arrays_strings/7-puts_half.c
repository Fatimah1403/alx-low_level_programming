 #include "main.h"
#include <string.h>

/**
 * puts_half -   should print the second half of the string
 *
 * @str: string to be printed
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, len, n;

	n = strlen(str);

	if (n % 2 == 1)
		len = n / 2 + 1;
	else
		len = n / 2;

	for (i = len; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
