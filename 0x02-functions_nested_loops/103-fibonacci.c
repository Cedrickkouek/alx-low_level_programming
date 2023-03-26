#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, sum, i, j, k;

	i = 0;
	j = 1;
	sum = 0;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
