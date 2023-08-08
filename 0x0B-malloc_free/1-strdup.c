#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	int i, j = 0;

	if (str == 0)
		return (0);

	while (str[j] != 0)
		j++;

	p = malloc(j * sizeof(*str) + 1);

	if (p == 0)
		return (0);
	for (i = 0; str[i]; i++)
		p[i] = str[i];
	return (p);
}
