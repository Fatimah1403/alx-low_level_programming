#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - a function that returns the value of a bit at a given index
  * @n: The value to be returned
  * @index: index stariting from 0 of the bit.
  *
  * Return:  If an error occurs - -1
  * Otherwise - The value of bit at index.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);

}
