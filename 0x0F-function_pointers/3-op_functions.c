#include "3-calc.h"

/**
 * op_add - returns sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: first integer
 * @b: second integer
 * Return: difference between two numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: first integer
 * @b: second integer
 * Return: product of two numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: first integer
 * @b: second integer
 * Return: result of the division of a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus function
 * @a: first integer
 * @b: second integer
 * Return: remainder of division between a and b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
