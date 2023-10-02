#include "main.h"

void endPart(int src_fd, int dst_fd);

/**
 *main - a func that copies the content of a file into another file
 *@argc: number of arguments parsed
 *@argv: array of arguments parsed
 *Return: 97, 98, 99 or 100 depending on the output
 */
int main(int argc, char *argv[])
{
	int src_fd, dst_fd, read_size;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dst_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dst_fd < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(src_fd);
		exit(99);
	}
	while ((read_size = read(src_fd, buffer, BUF_SIZE)) > 0)
	{
		if (write(dst_fd, buffer, read_size) != read_size)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(src_fd);
			close(dst_fd);
			exit(99);
		}
	}
	if (read_size < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	endPart(src_fd, dst_fd);
	return (0);
}
/**
 * endPart - a function that continues the main function
 * @src_fd: arg1
 * @dst_fd: arg2
 * Return: nothing
*/
void endPart(int src_fd, int dst_fd)
{
	if (close(src_fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	if (close(dst_fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", dst_fd);
		exit(100);
	}
}
