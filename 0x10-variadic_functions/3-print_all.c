#include <varargs.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_char - Prints a char.
 * @c: A list of arguments pointing to
 *       the character to be printed.
 */
void print_char(va_list, c)
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
 * print_string - Prints a string.
 * @s: A list of arguments pointing to
 *       the integer to be printed.
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
 * print_all - functions that prints anything.
 *
 * @format: a list of types of arguments passed to the function
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: Always (0)
 */
void print_all(const char * const format, ...)
{
	va_list anythg;
	unsigned int i = 0, j = 0;
	char *separator = "";
	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};


	va_start(anythg, format);

	while (format && format[i])
	{
		j = 0;
		while (funcs[j].t != NULL)
		{
			if (*(funcs[j].t) == format[i])
			{
				printf("%s", separator);
				funcs[j].f(anythg);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;

		printf("\n");
		va_end(anythg);
	}

}
