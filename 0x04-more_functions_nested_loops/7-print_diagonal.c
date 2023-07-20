#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *@n: is the number of times the \ character
 *should be printed
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = n; i > 0; i--)
		{
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}

}
