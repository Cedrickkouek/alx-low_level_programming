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
	int size1 = 1024, size2 = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, " Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	destination = open(argv[2], O_WRONLY | O_CREAT, 0664);
	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (size1 == 1024)
	{
		size1 = read(source, buffer, 1024);
		if (size1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			exit(98);
		}
		size2 = write(destination, buffer, size1);
		if (size2 < size1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close source  %d\n", source);
		exit(100);
	}
	if (close(destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close destination %d\n", destination);
		exit(100);
	}
	close(source);
	close(destination);

	return (0);
}
