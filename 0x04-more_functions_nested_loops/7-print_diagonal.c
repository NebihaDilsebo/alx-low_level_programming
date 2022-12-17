#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: intiger para
 * Return: size
 */

void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
		putchar('\n');
	else
	{
		
		for (x = 0; x < n; x++)
		{
			for (i = 0; i <= x; i++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
		putchar('\n');
	}
}
