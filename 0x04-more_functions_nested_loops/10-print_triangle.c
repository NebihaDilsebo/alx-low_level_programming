#include "main.h"

/**
 * print_triangle - prints a triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int size;
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("#");
		}
		printf("\n");
	}
	return (0);
}
