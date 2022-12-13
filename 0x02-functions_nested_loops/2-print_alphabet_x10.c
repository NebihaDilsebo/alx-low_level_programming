#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * description: print 10x
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar ('\n');
}


