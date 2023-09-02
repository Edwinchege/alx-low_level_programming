#include <stdio.h>
#include "main.h"

/**
 * main - prints the program's names
 * @argc: number of arguments
 * @argv: array of strings with arguments
 *
 * Return: 0 (Successful)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
