#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * description: prints all numbers of base 16 followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 'a';
	char b = '0';

	while
		(c <= 'f')
		{
			putchar(c);
			c++;
		}
	while
		(b <= '9')
		{
			putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}

