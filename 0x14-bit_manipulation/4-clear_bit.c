#include "main.h"
/**
 * clear_bit - a func that turns the value of a bit to 0.
 * @n: the number from which the operation is carried
 * @index: the index at which the value is cleared.
 * Return: 1 if its okay or -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0, mirror;

	if (index < i || index > sizeof(int) * 8)
	{
		return (-1);
	}
	else
	{
		mirror =  ~(1 << index);
		*n = *n & mirror;
		return (1);
	}
}
