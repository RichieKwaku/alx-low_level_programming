#include "main.h"

/**
 * *_strcpy - a function that copies strings
 * @dest: copy to
 * @src: copy from
 * Description: copy the string pointed to pointer src to dest
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1

		do {
			z++;
			dest[z] = src[z];
		} while (src[z] != '\0');

	return (dest);
}
