#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * description: print lowercase alphabet in reverse
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
