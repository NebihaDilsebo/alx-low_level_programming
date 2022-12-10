#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * description: prints all single digit number of base 10
 * starting from 0, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
