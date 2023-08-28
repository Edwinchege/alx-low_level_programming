#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of two diagonals
 * @a: input in the square matrix
 * @size: size of matrix
 * Return: 0 (Successful)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
