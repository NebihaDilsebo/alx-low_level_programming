#include "main.h"

/**
 * *_memset - function fills with constant byte
 * @s: source string
 * @b: the constant byte for filling
 * @n: length of buffer
 * Return: new string.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsined int i = 0;

while (i < n)
{
	*(s + i) = b;
	i++;
}
return (s);
}
