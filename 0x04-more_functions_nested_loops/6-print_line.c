#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_line - function that draws a straight line
 *
 * @n: parameter
 *
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
