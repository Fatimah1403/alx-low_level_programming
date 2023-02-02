#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * flip_bits - a function that returns the number of bits you would
  * need to flip to get from one number to another.
  *
  * @n: The value to be returned
  * @m: the second value to flip.
  *
  * Return:  If an error occurs - -1
  * Otherwise - The value of bit at index.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		count += (xor & 1);
		xor >>= 1;
	}
	return (count);

}
