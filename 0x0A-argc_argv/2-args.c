#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it recievde
 *
 * @argc: number of argument
 *
 * @argv: array of argument
 *
 * Return: Always (0) success.
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
