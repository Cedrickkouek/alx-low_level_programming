#include "main.h"
/**
 * main - a func that copies the content of a file into another file
 * @argc: number of arguments parsed
 * @argv: array of arguments parsed
 * Return: 97, 98, 99 or 100 depending on the output
 */
int main(int argc, char *argv[])
{
	int source, destination;
	char buffer[1024];
	int so1 = 1024, so2 = 0;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, " Error: Can't read from file %s\n", argv[1]),
		exit(98);
	}

	destination = open(argv[2], O_WRONLY | O_CREAT, 0664);
	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(source),
		exit(99);
	}

	while (so1 == 1024)
	{
		so1 = read(source, buffer, 1024);
		if (so1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]),
			exit(99);
		}
		so2 = write(destination, buffer, so1);
		if (so2 < so1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close source  %d\n", source),
		exit(100);
	}
	if (close(destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close destination %d\n", destination),
		exit(100);
	}
	return (0);
}
