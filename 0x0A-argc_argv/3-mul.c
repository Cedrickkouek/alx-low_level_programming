#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of multiplication
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 is succeeds or 1 if fails
 **/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int r, a, b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		r = a * b;
		printf("%d\n", r);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
