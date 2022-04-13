#include "3-calc.h"

/**
 * get_op_func - function pointer to select correct function
 * to perform operation asked by user.
 * @s: operator passed as argument in program
 *
 * Return: pointer to function that corresponds to the operator
 * selected by user
*/ 
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_div},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
