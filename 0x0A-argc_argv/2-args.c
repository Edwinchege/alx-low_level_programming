#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed in the program
 * @argc: number of arguments
 * @argv: array of strings with arguments
 *
 * Return: 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
