#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int num;
	char byte_ord;

	num = 1;
	byte_ord = (num & 0x01);

	if (byte_ord == 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}

}
