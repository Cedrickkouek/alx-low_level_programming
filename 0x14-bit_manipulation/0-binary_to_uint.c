#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function that converts binary to an unsigned int
 * @b: is the binary number to be converted
 * Return: Binary value or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, ans = 0, base = 1;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 1; b[i] != '\0'; i++)
	{
		count++;
	}
	for (i = count; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else if (b[i] == '1')
		{
			ans = ans + base;
		}
		base = base * 2;
	}
	return (ans);


}
