#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: input stringeturn
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
