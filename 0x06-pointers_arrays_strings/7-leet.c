#include "main.h"
#include <string.h>

/**
 * leet -  function that encodes a string into 1337
 *
 * @s: string to be printed
 * Return: Always 0
 */
char *leet(char *s)
{
	int a = 0, b = 0, lt = 5;

	char n[5] = {'A', 'E', 'O', 'T', 'L'};

	char rp[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < lt)
		{
			if (s[a] == n[b] || s[a] - 32 == n[b])
			{
				s[a] = rp[b];

			}
			b++;

		}
		a++;

	}
	return (s);

}
