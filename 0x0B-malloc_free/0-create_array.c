#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with a char
 * @size: size of array to be created
 * @c: char to initialize the elements of the array
 * Return: pointer to the array, on failure NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
