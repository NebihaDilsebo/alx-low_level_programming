#include "main.h"

/**
 * _strcat - concatenates two string
 * @src: first parameter
 * @dest: second parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (dest[i] != '\0');
	return (dest);
}

