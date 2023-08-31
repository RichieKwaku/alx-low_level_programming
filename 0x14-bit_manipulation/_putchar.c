#include "main.h"
#include <unistd.h>

/**
 * _putchar - char
 * @c: char print
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
