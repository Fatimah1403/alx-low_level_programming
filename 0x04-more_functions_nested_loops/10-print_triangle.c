#include "main.h"

/**
 * print_triangle - a function that prints a triangle.
 * @size: it represent the integer size to be printed
 * Return: returns void
 */
void print_triangle(int size)
{
	int i = 0, s = size, j;

	if (s <= 0)

		_putchar('\n');
	else
	{

		for (j = 0; j < s; j++)
		{
			while (i < s)
			{
				if ((i + j + 1) >= s)

					_putchar('#');
				else
					_putchar(' ');
				i++;

			}

			i = 0;

			_putchar('\n');

		}

	}
}
