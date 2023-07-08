#include "main.h"
/**
 * set_bit - changes a bit at index index to 1
 * @index: parameters
 * @n: parameters
 * Return: a new number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index <= 63)
	{
		p = 1 << index;
		*n = *n | p;
		return (1);
	}
	else
	{
		return (-1);
	}
}
