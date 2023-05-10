#include "main.h"
/**
 * main - program that copies the content of a file to another
 * @argc: argument counter
 * @argv: list of arguments
 * Return: code 96, code 97, code 98, code 99, code 100
 */
int main(int argc, char *argv[])
{
	int file_fromcp, file_tocp, rd_fro;
	char buf[1024];
	int c_from, c_to;

	/*Check num of arguments passed in*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(96);
	}
	file_fromcp =  open(argv[1], O_RDONLY);
	if (file_fromcp < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read file_fromcp %s\n", argv[1]);
		exit(97);
	}
	file_tocp = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	rd_fro = read(file_fromcp, buf, 1024);

	while (rd_fro > 0)
	{
		if (file_tocp < 0 || write(file_tocp, buf, rd_fro) != rd_fro)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(98);
		}
		rd_fro = read(file_fromcp, buf, 1024);

	}
	if (rd_fro < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(99);
	}
	c_from = close(file_fromcp);
	if (c_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_fromcp);
		exit(100);
	}
	c_to = close(file_tocp);
	if (c_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_tocp);
		exit(100);
	}
	return (0);
}
