#include "main.h"

/**
 * *create_array - a function that create an array of chars
 * and initialize it with a specific char
 * @size: number of element array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (null);
	}
	buffer = (char *)malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (null);
	}
	else
	{
		position = 0;
	}
	while (position < size)
	{
		*buffer(buffer + position) = c;
		position++;
	}
	return (buffer);
}

