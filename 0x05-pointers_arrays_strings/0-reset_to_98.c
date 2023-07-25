#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int paramater
 * and updates the value it points to 98
 * @n: int pararmotor
 * Return: Sothing
*/

void reset_to_98(int *n)
{
	int **p = &n;
	**p = 98;
}
