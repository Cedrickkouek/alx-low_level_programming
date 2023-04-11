#include <stdio.h>
/**
 * main - prints all parsed arguments
 * @argv: array of arguments
 * @argc: number of characters
 * Return: Always 0.
 **/
int main(int argc, char *argv[])
{
	int i, n;

	n = argc - 1;
	i = 0;
	if (argc >= 1)
	{
		while (i <= n && *argv[i] != '\0')
		{ 
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
