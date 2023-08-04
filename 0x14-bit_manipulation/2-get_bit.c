#include "main.h"
/**
 * get_bit - returns a bit at a given index
 * @n: number to check the index from
 * @index: index to get number from
 * Return: value at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, mirror;

	if (index < i || index >= sizeof(int) * 8)
	{
		return (-1);
	}

	 mirror = 1 << index;

	return ((n & mirror) != 0);
}
