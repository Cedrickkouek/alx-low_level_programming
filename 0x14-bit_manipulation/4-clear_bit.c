#include "main.h"
/**
 * clear_bit - clears the bit of a number at a specific index
 * @n: the number to be modified
 * @index: the index of the bit to modify
 * Return: 1 if okay or -1 if not okay
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int y;

	if (index >= 64)
	{
		return (-1);
	}

	y = 1 << index;

	if (*n & y)
	{
		*n = *n ^ y;
	}
	return (1);
}
