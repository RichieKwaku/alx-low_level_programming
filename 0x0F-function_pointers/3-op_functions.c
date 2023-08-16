#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - sum of two numbers
 * @a: first number
 * @b: second number
 * Return: add a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two numbers
 * @a: first number
 * @b: second number
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: first num
 * @b: second num
 * Return: quotient of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - reminder of multiplied numbers
 * @a: first number
 * @b: second number
 * Return: Reminder
 */

int op_mod(int a, int b)
{
	return (a % b);
}

