#include "main.h"
#include <stdio.h>

/**
 * _memset - funtions that fills a memory with a constant byte.
 *
 * @s: constant byte @b
 * @b: The memory area pointer
 * @n: The bytes of the memory area @s
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n i++)
	{
		s[i] = b;
		n--;
	}
	return (s);

}
