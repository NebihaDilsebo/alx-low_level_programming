#include "main.h"

/**
 * _puts_recursion - prints a string
 *@s: string parameter
 * Return: 0
 */

void _puts_recursion(char *s)
{
	s = "lpa\0";
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	s++;
}


