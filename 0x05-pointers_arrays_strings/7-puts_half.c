#include "main.h"

/**
 * puts_half - print half if a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int tai, n, i;

	tai = 0;

	while (str[tai] != '\0')
	{
		tai++;
	}
	if (tai % 2 == 0)
	{
		for (i = tai / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (tai % 2)
	{
		for (n = (tai - 1) / 2; n < tai - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
