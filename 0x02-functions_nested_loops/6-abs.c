#include "main.h"

/**
 * _abs - Computes abs value of int
 * @c: Numb to be comp
 * Return: Abs value of numb
 */

int _abs(int c)

{

	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}