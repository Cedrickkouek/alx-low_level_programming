#include "main.h"
/**
 * read_textfile - reads a textfile and prints it to POSIX
 * @filename: the name of the file
 * @letters: the size of the letters
 * Return: number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fs;
	char *mem;
	ssize_t r, wr;

	fs = open(filename, O_RDONLY);
	if (fs == -1)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}

	mem =  malloc(sizeof(char) * letters);
	if (mem == NULL)
	{
		return (0);
	}

	r = read(fs, mem, letters);
	wr = write(STDOUT_FILENO, mem, r);

	close(fs);
	free(mem);
	return (wr);
}
