#include "main.h"
#include <stdlib.h>

/**
* strln - find length of a string
* @s: string
* Return: int
*/

int strln(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}


/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char p;
	int size1, size2;

	if (s1 == 0)
		s1 = "\0";
	if (s2 == 0)
		s2 = "\0";
	size1 = strln(s1);
	size2 = strln(s2);
	p = malloc(size1 + size2 + 1);
	if (m == 0)
		return (0);
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
			p[i] = s1[i];
		else
			p[i] = s2[i - size1];
	}
	p[i] = '\0';
	return (p);
}
