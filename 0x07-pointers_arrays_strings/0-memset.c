#include "main.h"

/**
 * _memset - fills the memory with a specific value
 * @s: initial input
 * @b: expected final value
 * @n: number of inputs
 *
 * Return: pointer to the modified array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
