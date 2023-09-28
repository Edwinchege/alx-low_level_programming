#include "main.h"

/**
 * flip_bits - calculates number of bits to change
 * in a number to convert it into another number
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int value;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		value = exclusive >> i;
		if (value & 1)
			count++;
	}

	return (count);
}
