#include "main.h"

/**
 * largest_number - prints the largest of 3 numbers
 * @a: first intiger
 * @b: second intiger
 * @c: third intiger
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c && b > a)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}

	return (largest);
}
