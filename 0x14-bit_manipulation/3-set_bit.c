#include "main.h"
/**
 * set_bit - This function set the value of a particular bit to 1.
 * @n: the number in which the bit value is changed
 * @index: the index to be changed
 * Return: 1 or -1 if any problem occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0, mirror;

	if (index < i || index > sizeof(int) * 8)
	{
		return (-1);
	}
	else
	{
		mirror = 1 << index;
		*n = *n | mirror;
		return (1);
	}

}
