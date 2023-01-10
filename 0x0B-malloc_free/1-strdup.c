#include "main.h"

/**
 * _strlen - counts array
 * @s: array of element
 * Return: 1
 */

int_strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy array
 * @src: array of element
 * @dest: dest array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * *_strdup - array for prints a string
 * @str: array of element
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;
	dst = (char *) malloc(size * sizeof(char));

	if (dest == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}




