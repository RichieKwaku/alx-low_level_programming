#include "main.h"

/**
 * string_toupper - change all lwercase to upper
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[1] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'r')
			n[i] - n[i] - 32;
		i++;
	}
	return (n);
}
