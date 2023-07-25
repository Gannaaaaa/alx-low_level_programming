#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: Length of string
*/


int _strlen(char *s)
{
	int c, l;

	for (c = 0; s[c] != '\0'; c++)
		l++;
	return (l);
}
