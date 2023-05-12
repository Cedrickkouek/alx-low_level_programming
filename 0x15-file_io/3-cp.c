#include "main.h"
#define buffer_size 1024
/**
 * check_98 - checks error 98
 * @ff: the value to be checked
 * @buffer: the buffer
 * @argv: argument
 * Return: nothing
 */
void check_98(int ff, char *buffer, char *argv)
{
	if (ff < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}
/**
 * check_99 - checks error 99
 * @ff: the value to be checked
 * @buffer: the buffer
 * @argv: argument
 * Return: nothing
 */

void check_99(int ff, char *buffer, char *argv)
{
	if (ff < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
 * check_100 - checks error 100
 * @ff: the value to be checked
 * @buffer: the buffer
 * @argv: argument
 * Return: nothing
 */
void check_100(int ff, char *buffer)
{
	if (ff < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ff);
		free(buffer);
		exit(100);
	}
}
/**
 * main - program that copies the content of a file to another
 * @argc: argument counter
 * @argv: list of arguments
 * Return: code 96, code 97, code 98, code 99, code 100
 */
int main(int argc, char *argv[])
{
	int sf, ff, cp1, cp2;
	char *buffer;

	/*Check num of arguments passed in*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/*Creating the space where copied text will be stored*/
	buffer = malloc(sizeof(char) * buffer_size);
	if (!buffer)
	{
		return (0);
	}

	/*Open source file*/
	sf = open(argv[1], O_RDONLY);

	/*Check if there is any error with sf*/
	check_98(sf, buffer, argv[1]);

	/*open destination file*/
	ff = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	/*Check the destination file */
	check_99(ff, buffer, argv[2]);

	do {
		cp1 = read(sf, buffer, buffer_size);
		if (cp1 == 0)
		{
			return (0);
		}
		else
		{
			check_98(sf, buffer, argv[1]);
		}
		cp2 = write(ff, buffer, cp1);
		check_99(cp2, buffer, argv[2]);
	} while (cp2 >= buffer_size);
	cp1 = close(sf);
	check_100(cp1, buffer);
	cp1 = close(ff);
	check_100(cp1, buffer);
	free(buffer);
	return (0);
}
