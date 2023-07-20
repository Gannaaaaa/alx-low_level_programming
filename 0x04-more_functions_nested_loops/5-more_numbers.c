#include "main.h"

/**
 *more_numbers - print 0 - 14 ten times
 *only using -putchar three times
 *Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, nums, temp;

	for (i = 0; i < 10; i++)
	{
		for (nums = 0; nums < 15; nums++)
		{
			/*temp = nums;*/
			if (nums > 9)
			{
				_putchar(1 + 48);
				temp = nums % 10;
			}
			_putchar(temp + 48);
		}
			_putchar('\n');
	}




}
