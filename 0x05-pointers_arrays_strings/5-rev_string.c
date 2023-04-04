#include "main.h"

/**
 *rev_string - reverses a string
 *@s: parameter
 *Return: 0
 */

void rev_string(char *s)
{
	int i;
	int count = 0;
	char rev = s[0];

	while (s[count] != '\0')
	count++;
		for (i = 0 ; 1 < count ; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
