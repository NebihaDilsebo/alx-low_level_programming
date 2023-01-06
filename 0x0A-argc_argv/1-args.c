#include <stdio.h>

/**
 * main - writes a program that prints the argument passed in to it
 *
 * @args: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: this return to 0
 *
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
