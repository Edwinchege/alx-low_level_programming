#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects and returns the appropriate function
 * for a given operator string
 * @s: A pointer to the operator string
 *
 * Return: A pointer to the appropriate function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
