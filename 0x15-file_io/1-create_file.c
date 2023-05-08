#include "main.h"
/**
 * create_file - create a file
 * @filename: it's the file's name
 * @text_content: content to be written in the file.
 * Return: 1 if succeeded or -1 if failed.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nlet, wr;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
	{
		text_content = "";
	}
	for (nlet = 0; text_content[nlet]; nlet++)
	{
		;
	}

	wr = write(fd, text_content, nlet);

	if (wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);

}
