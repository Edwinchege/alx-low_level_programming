#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase, and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	char uppercase = 'A';

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
