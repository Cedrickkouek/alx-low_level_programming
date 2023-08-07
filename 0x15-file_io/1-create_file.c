#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: the name of the file
 * @text_content: the content to be in the created file
 * Return: 1 if succesfull or -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fs;
	ssize_t num;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (-1);
	}

	fs = open(filename, O_WRONLY | O_CREAT, 0644);
	if (fs == -1)
	{
		return (-1);
	}

	num = strlen(text_content);
	write(fs, text_content, num);

	close(fs);
	return (1);

}
