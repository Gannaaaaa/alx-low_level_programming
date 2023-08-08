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
	int i, j = 0;

	if (str == 0)
                return (0);

	while (str[j] != 0)
		j++;

	char *p = malloc(j + 1);

        if (p == 0)
		return (0);
	for (i = 0 ; i <= j ; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
