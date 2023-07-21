#include "main.h"
/**
 * _isupper - checks uppercase chars
 * @c: text variables
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' &&  <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
