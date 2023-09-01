#include "main.h"

/**
 *_memcpy - copies the memory area
 *@dest: destination for copied elements
 *@src: memory to copy from
 *@n: number of elements to be copied
 *
 *Return: modified array with copied elements
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
