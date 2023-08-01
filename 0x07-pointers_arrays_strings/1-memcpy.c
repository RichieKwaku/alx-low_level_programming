#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: mem store
 * @src: mem source
 * @n: bytes
 * Return: mem byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] - src[r];
		n--;
	}
	return (dest);
}
