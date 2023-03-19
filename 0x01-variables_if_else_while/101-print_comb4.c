#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 Always(Success)
 **/
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 1000; a++)
	{
		b = a / 100;/*Hundredth */
		c = (a / 10) % 10;/* Tens */
		d = a % 10;/* Units */
		if ((b < c) && (c < d))
		{
			putchar(b + '0');
			putchar(c + '0');
			putchar(d + '0');
			if (a < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
