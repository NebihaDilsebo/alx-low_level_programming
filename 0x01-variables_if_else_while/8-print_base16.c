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
	int b = '0';
	char c = 'a';

	while
		(b <= '9')
		{
			putchar(b);
			c++;
		}
	while
		(c <= 'f')
		{
			putchar(c);
			b++;
		}
	putchar('\n');
	return (0);
}

