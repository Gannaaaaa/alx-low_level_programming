#include "main.h"
/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, d = 0, f, s, l;

	while (n1[i] != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (l -= l; l >= 0; l--)
	{
		i--;
		j--;
		if (i >= 0)
			f = n1[i] - 48;
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - 48;
		else
			s = 0;
		r[l] = (f + s + d) % 10 + '\0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		if (l + 2 > size_r)
			return (0);
		r[l + 1] = '\0';
		while (l-- > 0)
			r[l + 1] = r[l];
		r[0] = '1';
	}
	return (r);
}
