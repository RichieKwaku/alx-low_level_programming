#include "main.h"

/**
 * _isalpha - alpha chars
 * @c: chars to be checked
 * Return: 1 for alpha chars 0 for anything
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
