#include "main.h"
/**
 * read_textfile -  reads a text file and prints the letters
 * @filename: is the filename.
 * @letters: number of letters to be displayed.
 * Return: number of letters printed or 0 if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *p;
	ssize_t rd, wr;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY); /*We open the file here*/
	if (fd == -1)
	{
		return (0);
	}
	p = malloc(sizeof(char) * letters);
	if (p == NULL)
	{
		return (0);
	}

	rd = read(fd, p, letters);
	wr = write(STDOUT_FILENO, p, rd);

	close(fd);
	free(p);
	return (wr);
}
