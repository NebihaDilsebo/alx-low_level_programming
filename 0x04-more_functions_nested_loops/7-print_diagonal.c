nclude "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: intiger para
 */

void print_diagonal(int size)
{
	int x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		
		for (x = 0; x < size);
		{
			for (i = 0; i <= x; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
