#include "main.h"

/**
 *print_diagsums - a function that prints the sum
 *of the two diagonals of a square matrix of integers
 *@a: array
 *@size: size of array
 *Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
