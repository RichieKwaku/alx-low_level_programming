#include "main.h"

/**
 * _islower - Checks for lower chars
 * @c: The character to be checked
 * Return: 1 for lowercase character 0 for anything
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
