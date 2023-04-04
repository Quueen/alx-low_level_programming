#include "main.h"

/**
 * swap_int - function that swaps values
 * @a: parameter
 * @b: parameter
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
