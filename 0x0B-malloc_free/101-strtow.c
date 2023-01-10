#include "main.h"
#include "stdlib.h"
int word_len(char *str);
int count_words(char *str);
char  **strtow(char *str);

/**
 * word_len - Locates the index marking the end of of the
 * first word contained within a string
 * @str: the string to be searched
 *
 * Return: the index markingthe end of the initial word pointed to by str
 */

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index)  !=  ' ')
	{
		index++;

	}
	return (len);
}
