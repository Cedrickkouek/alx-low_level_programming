#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file's name.
 * @text_content: added content
 * Return: 1 if the file exists. -1 if the file does not exist if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, nlet;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
		{
			;
		}
		wr = write(fd, text_content, nlet);

		if (wr == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
