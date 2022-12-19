#include "main.h"

/**
 * swap_int - swaps the value of two intigers
 * @a: intiger to swap
 * @b: intiger to swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
