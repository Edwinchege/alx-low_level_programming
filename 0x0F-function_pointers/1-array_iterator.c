#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - performs a specified action on each element in an array
 * @array: A pointer to an integer array
 * @size: number of elements in the array
 * @action: A pointer to a function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
