#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, i, j, k;

	i = 0;
	j = 1;
	for (count = 0; count <= 4000000; count++)
	{
		k = i + j;
		i = j;
		j = k;
		
		if (k % 2 == 0 )
		{
			printf("%lu", k);
		}

		if (count == 4000000)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
