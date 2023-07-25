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

	for (c = 0; *s != '\0'; ++c)
		s++;
	return (c);
}
