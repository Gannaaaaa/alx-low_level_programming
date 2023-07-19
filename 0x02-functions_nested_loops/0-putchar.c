#include "main.h"

/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
*/

int main(void)
{
	char word[] = "_putchar";
	for (int c = 0; c < 8; c++)
		_putchar(word[c]);
	_putchar('\n');
	return (0);


}
