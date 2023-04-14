#include "main.h"

/**
 * _strlen_recursion - function that prints the length of a string
 *
 * @s: parameter
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int longt = 0;

	if (*s)
	{
		longt++;
		longt += _strlen_recursion(s + 1);
	}
	return (longt);
}
