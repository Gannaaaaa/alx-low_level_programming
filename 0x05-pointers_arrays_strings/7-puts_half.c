#include "main.h"

/**
 * puts_half - print second half od a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
*/

void puts_half(char *str)
{
	int i = 0, c;

	while (str[i])
		i++;
	if (i % 2 == 0)
	{
		for (c = (i / 2); str[c] != '\0'; c++)
			_putchar(str[c]);
	}
	else
	{
		for (c = ((i - 1) / 2); str[c] != '\0'; c++)
			_putchar(str[c]);
	}
}
