#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers.
 * Return: Nothing.
 */
int main(void)
{
	unsigned long sum, count, i, j, k;

	i = 0;
	j = 1;
	for (count = 0; count <= 98; count++)
	{
		k = i + j;
		i = j;
		j = k;

		printf("%lu\n", k);

		if (count < 98)
		{
			printf(", ");
		}
	}
	return (0);
}
