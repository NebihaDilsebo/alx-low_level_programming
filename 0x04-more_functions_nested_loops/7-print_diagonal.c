#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: intiger para
 * Return: size
 */

void print_diagonal(int size)
{
	int x, i;

	if (size <= 0)
		putchar('\n');
	else
	{
		
		for (x = 0; x < size; x++)
		{
			for (i = 0; i <= x; i++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
		putchar('\n');
	}
}
