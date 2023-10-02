#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file where text is to be appended
 * @text_content: string with the text to be appended
 * Return: 1 (successful), -1 (Failure)
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_d, b_w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f_d = open(filename, O_WRONLY | O_APPEND);
	b_w = write(f_d, text_content, len);

	if (f_d == -1 || b_w == -1)
		return (-1);

	close(f_d);

	return (1);
}
