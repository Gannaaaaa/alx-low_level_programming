1-string_nconcat.c

#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j len1, len2;
	char *p;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while s1[len1]
		len1++;
	while s2[len2]
		len2++;
	if (len2 < n)
		p = malloc(len1 + len2 +1);
	else
		p = malloc(len1 + n +1);
	if (p == 0)
		return (0);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; n < len2 && i < (len1 + n); j++, i++)
		p[i] = s2[j];
	for (j = 0; n >= len2 && i < (len1 + len2); j++, i++)
		p[i] = s2[j];
	s[i] = '\0';
	return (p);
}
