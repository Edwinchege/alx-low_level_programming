#include "main.h"

/**
 * get_bit - returns the value of a bit at a specific index
 * @n: decimal number to use for search
 * @index: index of the bit to retrieve
 *
 * Return: value of the bit, -1 (error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
