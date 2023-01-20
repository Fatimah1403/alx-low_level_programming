#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - Prints a char.
 * @c: A list of arguments pointing to
 *       the character to be printed.
 */
void print_char(va_list c)
{
	char character;

	character = va_arg(c, int);
	printf("%c", character);
}

/**
 * print_int - Prints an int.
 * @i: A list of arguments pointing to
 *       the integer to be printed.
 */
void print_int(va_list i)
{
	int num;

	num = va_arg(i, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float.
 * @f: A list of arguments pointing to
 *       the float to be printed.
 */
void print_float(va_list f)
{
	float num;

	num = va_arg(f, double);
	printf("%f", num);
}

/**
 * print_string - Prints a string.
 * @s: A list of arguments pointing to
 *       the string to be printed.
 */
void print_string(va_list s)
{
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list anything;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(anything, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(anything);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(anything);
}
