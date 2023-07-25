#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int i, j;
	char tmp;

	while (s[i])
		i++;
	for (j = 0; j >= (i / 2); j++)
	{
		s[j] = tmp;
		s[j] = s[i - j];
		s[i - j] = tmp;
	}
}
