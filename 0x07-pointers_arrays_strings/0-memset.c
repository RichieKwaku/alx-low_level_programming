#include "main.h"
/**
 * _memset - fill mem with value
 * @s: memory address
 * @b: value
 * @n: bytes
 * Return: Array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
