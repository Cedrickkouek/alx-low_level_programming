#include "main.h"
/**
 * append_text_to_file -  adds content at the end of an existing file
 * @filename: file name
 * @text_content: file content
 * Return: 1 or -1 if not okay
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fs, ap, num;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fs = open(filename, O_RDONLY);
		if (fs == -1)
		{
			return (-1);
		}

		close(fs);
		return (1);
	}

	fs = open(filename, O_WRONLY | O_APPEND);
	if (fs == -1)
	{
		return (-1);
	}

	num = strlen(text_content);
	ap = write(fs, text_content, num);

	close(fs);
	if (num == ap)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
