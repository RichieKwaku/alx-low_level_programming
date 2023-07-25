#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: number ofelements of the array
 * Return: a and inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
				}
				if (i == (n - 1))
				{
				printf("%d", a[n - 1]);
				}
				printf("\n");
				}

