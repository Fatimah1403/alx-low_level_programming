#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * op_add - functions that returns sum of two integers a and b.
  * @a: First integer
  * @b: second integer
  *
  * Return: Always (0).
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - functions that returns the difference of two integers a and b.
  * @a: First integer
  * @b: second integer
  *
  * Return: Always (0).
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - functions that returns the multiplication of two integers a and b.
  * @a: First integer
  * @b: second integer
  *
  * Return: Always (0).
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - functions that returns d result of d
  * division of two integers a by b.
  * @a: First integer
  * @b: second integer
  *
  * Return: Always (0).
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - functions that returns d remainder of d
 * division of two integers a by b.
 * @a: First integer
 * @b: second integer
 *
 * Return: Always (0).
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


















