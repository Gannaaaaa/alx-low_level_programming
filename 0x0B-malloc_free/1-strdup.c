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
	char *p = malloc(sizeof(str) + 5);

	if (p == 0 || str == 0)
		return (0);
	while (str[j] != 0)
		j++;
	for (i = 0 ; i <= j ; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
