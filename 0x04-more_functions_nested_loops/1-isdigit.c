#include "main.h"
/**
 * _isdigit - a function that checks for a digit from 0 to 9
 * @c: is a the input
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
