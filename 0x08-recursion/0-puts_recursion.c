#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: Character array
 * Return: 0 (Successful)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
