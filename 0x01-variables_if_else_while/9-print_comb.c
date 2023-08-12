#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
    	if (num != 9)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
	else
	{
		putchar(num + '0');
	}
	num++;
	}
	return (0);
}
