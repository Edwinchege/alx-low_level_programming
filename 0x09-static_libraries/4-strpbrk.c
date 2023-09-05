#include "main.h"

/**
 * _strpbrk - searches a string for any matching characters
 * @s: string to check
 * @accept: string to compare with
 * Return: 0 (Successful)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}

	return ('\0');
}
