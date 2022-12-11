#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 * description: all possible combination of single digit number
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


