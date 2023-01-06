#include "main.h"
#include <stdio.h>

/**
 * _strncpy -  function that concatenates two strings.
 *
 * @dest: string to pass.
 * @src: string to pass.
 * @n: numbers of int
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	int b = 0;

	while (src[b])
	{
		b++;
	}
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
