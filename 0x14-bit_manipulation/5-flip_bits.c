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
	int p = n ^ m;

	while (p)
	{
		p &= (p - 1);
		count++;
	}
	return (count);
}
