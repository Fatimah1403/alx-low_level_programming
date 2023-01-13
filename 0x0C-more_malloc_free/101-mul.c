#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}
/**
 * create_xarray - Creates an array of chars and initializes it with
 *                 the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 *
 * Description: If there is insufficient space, the
 *              function exits with a status of 98.
 * Return: A pointer to the array.
 */
char *create_xarray(int size)
{
	int i;
	char *array;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		exit(98);
	for (i = 0; i < (size - 1); i++)
	{
		array[i] = '0';
	}
	array[i] = '\0';
	return (array);
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 * @av: The character to be converted.
 *
 * Return: The converted int.
 */
int get_digit(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);


}
/**
 * get_prod - Multiplies a string of numbers by a single digit.
 * @prod: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @zeroes: The necessary number of leading zeroes.
 *
 * Description: If mult contains a non-digit, the function
 *              exits with a status value of 98.
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}
	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*prod = (ten % 10) + '0';
}
/**
 * main -  a program that multiplies two positive numbers.
 * @argc: num of arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, k, l, m;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || get_digit)
	{
		for (l = 0; e[l]; l++)
			_putchar(e[l]);
		exit(98);
	}
	for (i = 0; argv[1][i]; i++)
		;
	for (j = 0; argv[2][j]; j++)
		;
	k = i + j + 1;
	a = malloc(k * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[l]; l++)
			_putchar(e[l]);
		exit(98);
	}
	create_xarray(a, k - 1);
	for (l = j - 1, m = 0; l >= 0; l--, m--)
	{
		t = get_prod(argv[2][l], argv[1], i - 1, a, (k - 2) - m);
		if (t == NULL)
		{
			for (l = 0; e[l]; l++)
				_putchar(e[l]);
			free(a);
			exit(98);
		}
	}
	_print(a, k - 1);
	return (0);



}
