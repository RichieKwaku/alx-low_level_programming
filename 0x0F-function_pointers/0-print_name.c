#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - name
 * @name: string
 * @f: pointer
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name)
}
