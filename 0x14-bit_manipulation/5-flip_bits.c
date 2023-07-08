#include "main.h"
/**
 * flip_bits - tells us how much bits to switch
 * @n: number1
 * @m: number2
 * Return: a number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
		m = m >> 1;
		n = n >> 1;
	}
	return (count);
}
