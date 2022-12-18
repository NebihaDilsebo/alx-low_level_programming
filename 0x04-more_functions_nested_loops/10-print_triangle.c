#include "main.h"

/**
 * print_triangle - prints size of triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size < 0)
		printf("\n");
	else
		for (i = 1; i <= 10; i++)
		{
			for (j = 1; j <= i; j++)
			{
				printf("#");
			}
			printf("\n");
		}
}
