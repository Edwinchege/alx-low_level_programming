#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int f_d);

/**
 * create_buffer - allocates a 1024 bytes buffer
 * @file: file name
 *
 * Return: pointer to the buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - handles the closing of the file descriptor
 * @f_d: file descriptor to be closed
 */
void close_file(int f_d)
{
	int c;

	c = close(f_d);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f_d %d\n", f_d);
		exit(100);
	}
}

/**
 * main - copies the content of one file to another
 * @argc: number of arguments
 * @argv: array of pointers to strings containing arguments
 *
 * Return: 0 on success.
 *
 */
int main(int argc, char *argv[])
{
	int from, to, b_r, b_w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	b_r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || b_r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		b_w = write(to, buffer, b_r);
		if (to == -1 || b_w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		b_r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (b_r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
