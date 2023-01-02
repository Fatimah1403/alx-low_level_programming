include "main.h"
#include <stdio.h>

/**
 * _memcpy - funtions that copies  memory area.
 *
 * @dest: The memory area destination
 * @src: The memory area source
 * @n: The bytes of the memory area @s
 *
 * Return: a pointer to the memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}
	return (dest);
}
