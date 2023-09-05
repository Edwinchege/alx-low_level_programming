#include <stdio.h>
#include "main.h"

/**
 * main - prints total number of arguments passed into the program
 * @argc: number of arguments
 * @argv: array of strings with arguments
 *
 * Return: 0 (Successful)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
