#include "main.h"
/**
 * flip_bits - counts the number of bits to flip to go from one number to
 * the next
 * @n: the first number
 * @m: the second number
 * Return: if okay
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mirror;
	int numofbits;

	mirror = n ^ m;
	numofbits = 0;
	while (mirror)
	{
		if (mirror & 1)
		{
			numofbits++;
		}
		mirror >>= 1;
	}

	return (numofbits);
}
