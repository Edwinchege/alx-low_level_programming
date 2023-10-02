#include "main.h"

/**
 * create_file - creates a text file
 * @filename: name of the file to be created
 * @text_content: string to be written in the file
 *
 * Return: 1 (successful), -1 (Failure)
 *
 */
int create_file(const char *filename, char *text_content)
{
	int f_d, b_w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b_w = write(f_d, text_content, len);

	if (f_d == -1 || b_w == -1)
		return (-1);

	close(f_d);

	return (1);
}

