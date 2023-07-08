#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int input
 * @index: index of the bit
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 1 << index;
	if (index < 63)
	{
		return ((n & i) > 0);
	}
	else
	{
		return (-1);
	}
}
