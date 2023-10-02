#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints its contents to the STDOUT
 * @filename: text file to be read
 * @letters: number of letters to be read from the file
 * Return: number of bytes read and printed, 0 (Failure)
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f_d;
	ssize_t b_w;
	ssize_t b_r;

	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	b_r = read(f_d, buffer, letters);
	b_w = write(STDOUT_FILENO, buffer, b_r);

	free(buffer);
	close(f_d);
	return (b_w);
}

