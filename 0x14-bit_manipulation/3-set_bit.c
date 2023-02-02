#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - a function that sets the value of a bit to 1 at a given index
  * @n: The value to be returned
  * @index: index stariting from 0 of the bit.
  *
  * Return:  If an error occurs - -1
  * Otherwise - The value of bit at index.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int)) * 8)
		return (-1);
	*n ^= (1 << index);
	return (1);
}


