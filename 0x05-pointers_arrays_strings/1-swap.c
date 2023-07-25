#include "main.h"

/**
 * swap_int swaps the valuas of to integers
 * using two input parameters
 * @a: input paramter 1
 * @b: input paramter 2
 * return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
