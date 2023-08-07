#include "main.h"
/**
 * _memset - Program fills a block of memor value
 * @s: starting address of memory to be filled
 * @b: value
 * @n: number of bytes
 * Return: change array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}

	return (s);
}
