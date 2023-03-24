#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_diagonal - function that prints a diagonal line
 *
 * @n: parameter
 *
 * Return: always 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		putchar('\n');
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
