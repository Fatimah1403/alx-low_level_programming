#include "main.h"
#include <stdio.h>

/**
  * check_prime - Check if number is prime
  * @n: the number to be checked
  * @m: the iteration times
  *
  * Return: 1 for prime or 0 composite
  */
int check_prime(int n, int m)
{
	if (m < 2 || m % n)
		return (0);
	else if (n > m / 2)
		return (1);
	else
		return (check_prime(n, m + 1));
}


/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: number to be returned
 * Return: Always 0 (success)
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}

