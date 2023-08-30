#include "main.h"

/**
 * is_prime_number - Checks for prime numbers
 * @n: integer to be tested
 * Return: Call the actual prime function
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks for prime numbers recursively
 * @n: integer to be tested
 * @i: divisor being checked
 * Return: 1 for success, otherwise 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
