#include "function_pointers.h"

/**
 * int_index - searches for an integer element in an array
 * by using a specified comparison function
 * @array: A pointer to an integer array
 * @size: number of elements in the array
 * @cmp: A pointer to a function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
