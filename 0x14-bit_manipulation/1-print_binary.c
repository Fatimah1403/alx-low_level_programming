#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * print_binary - a function that prints the binary
  * representation of a number.
  *
  * @n: The binary number to print
  *
  * Return: The positive number converted from a binary
  */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
