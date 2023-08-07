#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: the name of the file
 * @text_content: the content to be in the created file
 * Return: 1 if succesfull or -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fs, num, wr;

	if (!filename)
	{
		return (-1);
	}
	
	fs = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);

	if (!text_content)
	{
		text_content = "";
	}

	for (num = 0; text_content[num]; num++)
	{
		;
	}

	wr = write(fs, text_content, num);
	
	if (wr == -1)
	{
		return (-1);
	}
	close(fs);
	return (1);

}
