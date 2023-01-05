#include "main.h"

/**
 * helperFunction -checks if the sqrt of number exist
 * @num: number
 * @sqrt: possible sqrt of a number
 *
 * Return: sqrt of number at -1 for error
 */

int helperFunction(int num, int sqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperFunction(num, psqrt + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the natural sqrt
 *
 * Return: squrare root of n
 * -1 if n does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}

