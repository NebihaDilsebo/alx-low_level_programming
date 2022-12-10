#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 *
 *description: print the alphabet in lowercase
 *and then in uppercase, followed by a new line
 *Return: Always zero
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
		return (0);
}

