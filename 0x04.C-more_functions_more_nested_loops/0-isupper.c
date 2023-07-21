#include "main.h"

/**
 * _isupper - checks lowercase chars
 * @c: The charto be checked
 * Return: 1 for uppercase or 0 for lowercase
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
