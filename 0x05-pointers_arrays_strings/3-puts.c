#include "main.h"
#include <stdio.h>

/**
 * _puts -  function that prints a string
 *
 * @str: string to be printed
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
