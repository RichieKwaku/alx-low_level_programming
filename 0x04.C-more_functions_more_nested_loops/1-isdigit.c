#include "main.h"

/**
 * _isdigit - checks degit
 * @c: The cahr to be checked
 * Return: 1 for digit char or 0 for anything else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
