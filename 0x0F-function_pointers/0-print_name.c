#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - uses a function pointer to print a name
 * @name: A pointer to a character string
 * @f: A pointer to a function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
