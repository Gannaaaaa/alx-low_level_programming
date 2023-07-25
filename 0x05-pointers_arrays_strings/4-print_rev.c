#include "main.h"

/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
		i++;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
