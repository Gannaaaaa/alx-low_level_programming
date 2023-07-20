#include "main.h"

/**
 *print_most_numbers - print 0 - 9 apart
 *do not print 2 and 4
 *only using -putchar twice
 *Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == '2' || i == '4')
			break;
		_putchar(i);
	}
	_putchar('\n');

}
