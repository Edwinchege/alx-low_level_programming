#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: pointer to the string having the binary number
 *
 * Return: Decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n = 2 * n + (b[i] - '0');
	}

	return (n);
}
