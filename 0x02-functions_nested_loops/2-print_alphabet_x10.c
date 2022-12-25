#include "main.h"

/**
 *  print_alphabet_x10 - prints 10 timesalphabets in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (count < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		count++;
		_putchar('\n');
	}
}
