#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int y = 0;
	int len = 0, base = 1;

	if (!b)
	{
		return (0);
	}
	while(b[len])
	{
		len++;
	}

	while(len)
	{
		if
		(b[len - 1] != '0' && b[len - 1] != '1')
		{
			return (0);
		}
		else if (b[len - 1] == '1')
		{
			y = y + base;
		}
		base = base * 2;
		len = len - 1;
	}
	return (y);
}
