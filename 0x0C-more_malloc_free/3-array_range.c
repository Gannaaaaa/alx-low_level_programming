#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *p, i = 0, j;

	if (min > max)
		return (0);
	while (min++ <= max)
		i++;
	p = malloc(4 * i);
	if (!p)
		return (0);
	for (j = 0; j < i; j++)
		p[j] = min++;
	return (p);
}
