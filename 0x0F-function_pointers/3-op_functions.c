#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of the numbers
 * @a: number one
 * @b: number two
 * Return: sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: first number
 * @b: second number
 * Return: the result of the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - returns the division of two numbers
 * @a: first number
 * @b: second number
 * Return: the resulting division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder
 * @a: first number
 * @b: second number
 * Return: division of the numbers a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}


