#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
	{
		r = (-1 * r);
	}
	_putchar(r + '0');
	return (r);
}
